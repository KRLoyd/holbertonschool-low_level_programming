# 0x06. C - Even More Pointers, Arrays, and Strings

## Description
Files in this folder are more exerises from Holberton School to practice working with pointers, strings, and arrays in the C Programming Language.

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

##### [0-memset.c](0-memset.c)
Function that fills memory with a constant byte. Similar to `memset`; run `man memset` in your terminal for more information.
* Prototype: `char *_memset(char *s, char b, unsigned int n);`
	* @s: pointer to the memory area to fill
    * @b: byte to fill the memory with
    * @n: number of bytes to fill the memory with b
	* Return: pointer to the memory area `s`

#### [1-memcpy.c](1-memcpy.c)
Function that copies memory area from one area to another. Similar to the C standard library function `memcpy`. For more information, run `man memcpy`.
* Prototype: `char *_memcpy(char *dest, char *src, unsinged int n);`
    * @dest: memory area to copy to
    * @src: memory area to copy from
    * @n: number of bytes to be copied
    * Return: pointer to `dest`

#### [2-strchr.c](2-strchr.c)
Function to locate a character in a string. Similar to the C standard library function `strchr`; run `man strchr` for more information.
* Prototype: `char *_strchr(char *s, char c);`
    * @s: stirng to evaluate
    * @c: character to find in `s`
    * Returns
        * pointer to the first occurrance of `c` in string `s`
        * `NULL` if character is not found

#### [3-strspn.c](3-strspn.c)
Function that gets the length of a prefix substring. Similar to the C standard library function `strspn`; run `man strspn` for more information.
* Prototype: `unsigned int _strspn(char *s, char *accept);`
    * @s: string to evaluate
    * @accept: bytes that are accepted in the prefix substring of `s`
    * Return: number of bytes in the initial segment of `s` which are only bytes from `accept`

#### [4-strpbrk.c](4-strpbrk.c)
Function that locates the first occurance in a string of any of the bytes in a specified string.. Similar to the C standard library function `strpbrk`; run `man strpbrk` for more information.
* Prototype: `char *_strpbrk(char *s, char *accept);`
    * @s: string to evaluate
    * @accept: string of acceptable bytes
    * Returns:
        * pointer to the first byte in `s` that matches any byte in `accept`
        * `NULL` if no byte from `accept` is found

#### [5-strstr.c](5-strstr.c)
Function to find the first occurance of a substring in a string. Similar to the C library function `strstr`; run `man strstr` for more information.
* Prototype: `char *_strstr(char *haystack, char *needle);`
    * @haystack: string to search in
    * @needle: substring to find in `haystack`
    * Returns:
        * pointer to the beginning of the located substring
        * `NULL` if the substring is not found

#### [7-print_chessboard.c](7-print_chessboard.c)
Function that prints a chessboard!
* Prototype: `void print_chessboard(char (*a)[8]);`

#### [8-print_diagsums.c](8-print_diagsums.c)
Function that prints the sum of the two diagonals of a square matrix of integers.
* Prototype: `void print_diagsums(int *a, int size);`
    * @a: pointer to a matrix to evaluate
    * @size: size of the matrix

#### [9-set_string.c](9-set_string.c)
Function that sets the value of a pointer to a character.
* Prototype: `void set_string(char **s, char *to);`
    * @s: pointer to the pointer to be changed
    * @to: the string to change the pointer to


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
