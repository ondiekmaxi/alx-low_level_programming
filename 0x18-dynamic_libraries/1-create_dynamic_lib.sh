#!/bin/bash
gcc -c -fPIC -wall -pedantic -Werror -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *o
