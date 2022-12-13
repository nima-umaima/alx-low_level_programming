#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -wl,-soname,liball.so liball.so *.o
