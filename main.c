
#include "stringmanager.h"

int main()
{
    that_addString("--Formatted List--");

    that_addString("A Character  : %c", "G");

    that_addString("A String     : %s", "Adding This because I can");

    that_addString("Digits       : %d", -64965);

    that_addString("Long Doubles : %lf", 3.141592653589793); // Only works up to 15 Digits

    that_addString("Binary       : 0b%b", 65005);

    that_addString("Hexadecimal  : 0x%x", 512);

    that_addString("UINT64       : %llu", 2347523445); // Unsigned Long Long Int

    that_printAllStrings();

    that_removeString(4); // This removes the 4th string

    that_printAllStrings();

    that_cleanupStrings();

    return 0;
}


