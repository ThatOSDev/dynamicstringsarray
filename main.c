
#include "stringmanager.h"

int main()
{
    that_addString("first first");

    that_addString("second second : %c", "G");

    that_addString("third third : %s", "Adding This because I can");

    that_addString("fourth fourth");

    that_addString("fifth fifth : %d", -64965);

    that_addString("sixth sixth");

    that_addString("seventh seventh : 0b%b", 65005);

    that_addString("eighth eighth : 0x%x", 512);

    that_addString("ninth ninth : %llu", 2347523445);

    that_printAllStrings();

    that_removeString(4); // This removes the 4th string

    that_printAllStrings();

    that_cleanupStrings();

    return 0;
}


