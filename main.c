
#include "stringmanager.h"
#include <stdio.h>

int main()
{
    that_addString("First");
    that_addString("Second");
    that_addString("Third");

    for(int t = 0; t < that_getTotalStrings(); t++)
    {
        printf("%s\n", that_getString(t));
    }

    printf("\n");

    that_removeString(2);

    for(int t = 0; t < that_getTotalStrings(); t++)
    {
        printf("%s\n", that_getString(t));
    }

    that_cleanupStrings();

    return 0;
}
