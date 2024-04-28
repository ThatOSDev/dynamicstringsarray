
#ifndef STRING_MANAGER_H
#define STRING_MANAGER_H

int   that_getTotalStrings(void);
void  that_addString(const char* str);
char* that_getString(int strNumber);
void  that_printAllStrings(void);
void  that_removeString(int strNumber);
void  that_cleanupStrings(void);

#endif // STRING_MANAGER_H
