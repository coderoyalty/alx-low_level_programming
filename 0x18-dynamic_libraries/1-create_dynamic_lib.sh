#!/bin/bash
gcc -g -fPIC -c *.c  && gcc -shared *.o -o liball.so
