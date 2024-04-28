
gcc.exe -Wall -std=c17 -m64 -O2  -c main.c -o main.o
gcc.exe -Wall -std=c17 -m64 -O2  -c stringmanager.c -o stringmanager.o
gcc.exe  -o dynamicstringsarray.exe main.o stringmanager.o  -static -m64 -s

del *.o

pause