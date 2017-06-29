README.md
# 0x17. C - Dynamic libraries

## Purpose
To be able to explain the following:
* What is a doubly linked list
* How to use doubly linked lists

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests done in VirtualBox on Ubuntu via Vagrant(1.8.6) and all files compiled with `gcc -Wall -Werror -Wextra -pedantic` (version 4.8.4).

#### Style
All C code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki

## Files and Folders

[holberton.h](holberton.h)

Holds the following prototypes: 
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

[libholberton.so](libholberton.so)

Dynamic library containing all functions listed in `holberton.h`

[1-create_dynamic_lib.sh](1-create_dynamic_lib.sh)

Script that creates a dynamic library, `liball.so`, from all `.c` files in the current directory.

[liball.so](liball.so)

Dynamic library created by `1-create_dynamic_lib.sh`.

### Folders
[all_functions](all_functions): Contains the source code for all functions in `holberton.h`

[my_tests](my_tests): Tests for source code found in `all_functions`

## Authors
Kristen Loyd        <a href='https://github.com/KRLoyd'>Github</a> ,  <a href='https://www.linkedin.com/in/kristen-loyd-34984a92/'>Linkedin</a>

## License
Public Domain, no copyright protection
