# 0x0C. C - Preprocessor

## Description
This directory includes files for tasks to strengthen my understanding of C Preprocessing.

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file `holberton.h`


## Files
All files must be executable to run. To add executable permissions to any file: `chmod u+x file_name`

##### [0-object_like_macro.h](0-object_like_macro.h)
Header file to define a macro named `SIZE` as an abbreviation for the token `1024`.

##### [1-pi.h](1-pi.h)
Header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

##### [2-main.c](2-main.c)
Program to print the name of the file it was compiled from.
* Usage:
```
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
$ ./c 
2-main.c
$ cp 2-main.c 02-main.c
$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
$ ./cc
02-main.c
```

##### [3-function_like_macro.h](3-function_like_macro.h)
Function-like macro `ABS(x)` that computes the absolute value of a number `x`.

##### [4-sum.h](4-sum.h)
Function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
