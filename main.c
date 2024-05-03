
#include "stringmanager.h"

int main()
{
    that_addString("first first");

    that_addString("second second");

    that_addString("third third : %s", "Adding This because I can");

    that_addString("fourth fourth");

    that_addString("fifth fifth : %d", 49);

    that_addString("sixth sixth");

    that_addString("seventh seventh");

    that_addString("eighth eighth : 0x%x", 512);

    that_addString("ninth ninth : %llu", 2347523445);

    that_printAllStrings();

    that_removeString(3); // This removes the 3rd string

    that_printAllStrings();

    that_cleanupStrings();

    return 0;
}


