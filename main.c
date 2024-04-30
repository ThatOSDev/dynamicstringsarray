
#include "stringmanager.h"

int main()
{
    that_addString("first first");

    that_addString("second second");

    that_addString("third third : %s", "Adding This because I can");

    that_addString("fourth fourth");

    that_addString("fifth fifth");

    that_addString("sixth sixth");

    that_printAllStrings();

    that_removeString(1);

    that_printAllStrings();

    that_cleanupStrings();

    return 0;
}




