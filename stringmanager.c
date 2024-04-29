
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** strings            = NULL;
unsigned int stringsIndex = 0;

unsigned int that_getTotalStrings()
{
    return stringsIndex;
}

void that_addString(const char* str)
{
    int len = strnlen(str, 4096);

    if(strings == NULL)
    {
        strings = malloc(sizeof *strings);
    }
    else
    {
        strings = realloc(strings, sizeof *strings * (stringsIndex + 1));
    }

    strings[stringsIndex] = malloc(len + 1); // The +1 so we can NULL Terminate.

    strncpy(strings[stringsIndex], str, len); // Copy str to the string.

    strings[stringsIndex][len] = 0; // NULL Terminate each string here.

    stringsIndex++;
}

char* that_getString(unsigned int strNumber)
{
    return strings[strNumber];
}

void that_printAllStrings()
{
    printf("\n-------STRINGS LIST-----------\n");
    printf("%d\n", stringsIndex);
    for(unsigned int t = 0; t < stringsIndex; t++)
    {
        printf("DISPLAYING STRING : #%d - %s\n", t, strings[t]);
    }
}

void that_removeString(unsigned int strNumber)
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
    tempStrings = malloc(sizeof *tempStrings);
    unsigned int newIndex = 0;
    if(stringsIndex > 0)
    {
        for(unsigned int t = 0; t < stringsIndex; t++)
        {
            if(t != (strNumber - 1))
            {
                int len = strnlen(strings[t], 4096);
                tempStrings = realloc(tempStrings, sizeof *tempStrings * (t + 1));
                tempStrings[newIndex] = malloc(len + 1);
                strncpy(tempStrings[newIndex], strings[t], len);
                tempStrings[newIndex][len] = 0;
                newIndex++;
            } else {
                printf("\nREMOVING STRING #%d : %s\n", t + 1, strings[t]);
            }
        }
    }

    for(unsigned int t = 0; t < stringsIndex; t++)
    {
        free(strings[t]);
    }
    free(strings);

    // COPY from tempStrings to strings
    strings = malloc(sizeof *strings);

    for(unsigned int t = 0; t < newIndex; t++)
    {
        strings = realloc(strings, sizeof *strings * (t + 1));
        int len = strnlen(tempStrings[t], 4096);
        strings[t] = malloc(len + 1);
        strncpy(strings[t], tempStrings[t], len);
        strings[t][len] = 0;
    }

    for(unsigned int t = 0; t < newIndex; t++)
    {
        free(tempStrings[t]);
    }

    free(tempStrings);
    stringsIndex = newIndex;
}

void that_cleanupStrings() // Cleans out the strings.
{
    printf("\n-------CLEANING LIST-----------\n");
    printf("TOTAL STRINGS : %d\n", stringsIndex);
    for(unsigned int t = 0; t < stringsIndex; t++)
    {
        printf("\nSTRING : #%d - %s\n", t, strings[t]);
        free(strings[t]);
    }

    printf("\nFREEING strings\n");
    free(strings);
}


