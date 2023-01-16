#!/bin/bash
gcc -c -g -fPIC -Wall -Werror -Wextra -pedantic *.c 
gcc -shared -Wl, -soname, liball.so -o liball.so *.o -lc
