
#include "stringmanager.h"
#include <stdio.h>

int main()
{
    addString("First");
    addString("Second");
    addString("Third");

    for(int t = 0; t < getTotalStrings(); t++)
    {
        printf("%s\n", getString(t));
    }

    printf("\n");

    removeString(2);

    for(int t = 0; t < getTotalStrings(); t++)
    {
        printf("%s\n", getString(t));
    }

    cleanupStrings();

    return 0;
}
