# 0x1B. C - Makefiles

## Description
My first work with makefiles!
Goals are to be able to explain the following:
* What are make, Makefiles
* When, why and how to use Makefiles
* What are a rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).
#### Usage
To use a makefile, run the following code: `make [rule_name] -f <Makefile_name>`


## Files
### Holberton Source Code
Holberton School provided the following files to be used by my makefiles.

[holberton.c](holberton.c) : prints the Holberton logo
* Prototype: `void print_holberton(void);`

[m.h](m.h) : Header file for `main.c` and `holberton.c`

[main.c](main.c) : Entry point to run `holberton.c`

### Makefiles
[0-Makefile](0-Makefile)
* Rules:
    * `all` : builds the `holberton` executable

[1-Makefile](1-Makefile)
* Rules:
    * `all` : bulds the `holberton` executable
* Variables:
    * `CC` : compiler to be used
    * `SRC` : `.c` files

[2-Makefile](2-Makefile)
* Rules:
    * `all` : bulds the `holberton` executable
* Variables:
    * `CC` : compiler to be used
    * `SRC` : `.c` files
    * `OBJ` : `.o` files
    * `NAME` : name of the executable

[3-Makefile](3-Makefile)
* Rules:
    * `all` : bulds the `holberton` executable
    * `clean` : deletes Emacs temporary files and the executable file
    * `oclean` : delete the object files
    * `fclean` : deletes the Emacs temporary files, the executable file, and object files
    * `re` : forces recompilation of all source files
* Variables:
    * `CC` : compiler to be used
    * `SRC` : `.c` files
    * `OBJ` : `.o` files
    * `NAME` : name of the executable
    * `RM` : program to delete files


[4-Makefile](4-Makefile)
* Rules:
    * `all` : bulds the `holberton` executable
    * `clean` : deletes Emacs temporary files and the executable file
    * `oclean` : delete the object files
    * `fclean` : deletes the Emacs temporary files, the executable file, and object files
    * `re` : forces recompilation of all source files
* Variables:
    * `CC` : compiler to be used
    * `SRC` : `.c` files
    * `OBJ` : `.o` files
    * `NAME` : name of the executable
    *  `RM` : program to delete files
    * `CFLAGS` : compiler flags `-Wall -Werror -Wextra -pedantic`

[100-Makefile](100-Makefile)
* Notes:
    * `100-Makefiel` works even if there are files in the directory that have the same name as rules. 
    * Makefile will not compile if the header file is missing.
* Rules:
    * `all` : bulds the `holberton` executable
    * `clean` : deletes Emacs temporary files and the executable file
    * `oclean` : delete the object files
    * `fclean` : deletes the Emacs temporary files, the executable file, and object files
    * `re` : forces recompilation of all source files
* Variables:
    * `CC` : compiler to be used
    * `SRC` : `.c` files
    * `OBJ` : `.o` files
    * `NAME` : name of the executable
    * `RM` : program to delete files
    * `CFLAGS` : compiler flags `-Wall -Werror -Wextra -pedantic`

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
