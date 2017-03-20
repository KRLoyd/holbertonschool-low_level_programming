# 0x05. C - more pointers, arrays, and strings

## Purpose
Reinforcement of the Purpose for Project 0x04. C, which can be found at https://github.com/KRLoyd/holbertonschool-low_level_programming/blob/master/0x04-pointers_arrays_strings/README.md

### Project Notes
All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
All code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki
Protoypes of all functions used are included in header file `holberton.h`

## Tasks
#### `0-strcat.c`
Function that concatenates two strings. Similar to the function `strcat` (`man strcat` for more info).
* Prototype: `char *_strcat(char *dest, char *src);`
* Note: Appends the `src` string to the `dest` string, overwriting the terminating byte of `dest` and adding it at the end of the new end of the string. 

#### `1-strncat.c`
Function that concatenates two strings to `n` bytes. Similar to `strncat` (`man strncat` for mor info).
* Prototype: `char *_strncat(char *dest, char *src, int n);`
* Returns: pointer to the resulting srting `dest`
* Note: `_strncat` is similar to `_strcat`, except:
	* it uses, at most, `n` bytes from `src`; and
	* `src` does not need to be null-terminated if it contains `n` or more bytes 

#### `2-strcpy.c`
Function that copies a string. Similar to `strncpy` (`man strncpy` for more info).
* Prototype: `char *_strncpy(char *dest, char *src, int n);` 

#### `3-strcmp`
Function that compares two strings. Similar to `strcmp` (`man strcmp` for more info).
* Prototype: `int _strcmp(char *s1, char *s2);`

#### `4-rev_array.c`
Function that reverses the content of an array of integers.
* Prototype: `void reverse_array(int *a, int n);`
	* `n` is the number of elements of the array

#### `5-string_toupper.c` 
Function that changes all lowercase letters of a string to uppercase.
* Prototype: `char *string_toupper(char *);`

#### `6-cap_string.c`
Function that capitalizes all words of a string.
* Prototype: `char *cap_string(char *);`
	* Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}` 

#### `7-leet.c`
Function that encodes a string into l337.
* l337 specifics:
	* `a` and `A` are replaced with `4`
	* `e` and `E` are replaced with `3`
	* `o` and `O` are replaced with `0`
	* `t` and `T` are replaced with `7`
	* `l` and `L` are replaced with `1`
* Prototype: `char *leet(char *);` 

#### `8-rot13.c`
Function that encodes a string using rot13.
* Prototype: `char *rot13(char *);` 

#### `100-print_number.c`
Function that prints an integer.
* Prototype: `void print_number(int n);`

### `101-magic.c`
Function that prints `a[2] = 98`, followed by a new line.
