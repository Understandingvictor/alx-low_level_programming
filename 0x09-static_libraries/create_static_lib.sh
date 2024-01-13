#1/bin/bash

gcc -c *.c
ar rcs liball.a *.o
rm *.c
rm *.o
