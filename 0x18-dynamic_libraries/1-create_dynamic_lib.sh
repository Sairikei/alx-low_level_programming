#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
