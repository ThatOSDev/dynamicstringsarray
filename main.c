
#include "stringmanager.h"

int main()
{
    that_addString("first first");

    that_addString("second second");

    that_addString("third third : %s", "Adding Th");     // This length works. ( 9 )
//    that_addString("third third : %s", "Adding This"); // TODO : Fix the parameter length issue.

    that_addString("fourth fourth");

    that_addString("fifth fifth");

    that_addString("sixth sixth");

    that_printAllStrings();

    that_removeString(4);

    that_printAllStrings();

    that_cleanupStrings();

    return 0;
}
