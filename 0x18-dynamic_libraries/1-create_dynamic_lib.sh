#!/bin/bash
gcc -c -g -fPIC -Wall -Werror -Wextra -pedantic *.c 
gcc -shared -soname,-Wl -o liball.so *.o -lc
