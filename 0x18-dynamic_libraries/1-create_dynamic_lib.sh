#!/bin/bash
gcc -Wall -Werror -Wextra -pendantic -fPIC *.c -shared -o liball.so
