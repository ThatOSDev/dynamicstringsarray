
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** strings = NULL;
int stringsIndex = 0;

int that_getTotalStrings()
{
    return stringsIndex;
}

void that_addString(const char* str)
{
    int len = strnlen(str, 4096);
    stringsIndex++;

    if(strings == NULL)
    {
        strings = malloc(stringsIndex);
    } else
    {
        strings = realloc(strings, stringsIndex);
    }

    strings[stringsIndex - 1] = malloc(len + 1);

    strncpy(strings[stringsIndex - 1], str, len + 1);
}

char* that_getString(int strNumber)
{
    return strings[strNumber];
}

void that_printAllStrings()
{
    for(int t = 0; t < stringsIndex; t++)
    {
        printf("%s\n", strings[t]);
    }
}

void that_removeString(int strNumber)
{
    if(strNumber < 1)
    {
        strNumber = 1;
    }

    if(strNumber > stringsIndex)
    {
        strNumber = stringsIndex;
    }

    // remove string from numbered position and copy from position to new strings
    char** tempStrings = NULL;
    tempStrings = malloc(stringsIndex - 1);
    int newIndex = 0;
    if(stringsIndex > 0)
    {
        for(int t = 0; t < stringsIndex; t++)
        {
            if(t != (strNumber - 1))
            {
                int len = strnlen(strings[t], 4096);
                tempStrings[newIndex] = malloc(len + 1);
                strncpy(tempStrings[newIndex], strings[t], len + 1);
                newIndex++;
            }
        }
    }

    for(int t = 0; t < stringsIndex; t++)
    {
        free(strings[t]);
    }
    free(strings);

    // COPY from tempStrings to strings
    strings = malloc(newIndex);

    for(int t = 0; t < newIndex; t++)
    {
        int len = strnlen(tempStrings[t], 4096);
        strings[t] = malloc(len + 1);
        strncpy(strings[t], tempStrings[t], len + 1);
    }

    for(int t = 0; t < newIndex; t++)
    {
        free(tempStrings[t]);
    }

    free(tempStrings);
    stringsIndex = newIndex;
}

void that_cleanupStrings() // Cleans out the strings, starting with the last one.
{
    for(int t = (stringsIndex - 1); t >=0; t--)
    {
        free(strings[t]);
    }
    free(strings);
}


