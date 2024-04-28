
#ifndef STRING_MANAGER_H
#define STRING_MANAGER_H

int   getTotalStrings(void);
void  addString(const char* str);
char* getString(int strNumber);
void  printAllStrings(void);
void  removeString(int strNumber);
void  cleanupStrings(void);

#endif // STRING_MANAGER_H
