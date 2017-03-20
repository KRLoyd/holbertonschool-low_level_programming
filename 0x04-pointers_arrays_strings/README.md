# 0x0.4 C - pointers, arrays, and strings

## Purpose
To be able to explain the following:
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### Project Notes
All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
All code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki
Protoypes of all functions used are included in header file `holberton.h`

## Files

#### `0-reset_to_98.c`
Function that takes a pointer to an `int` as a parameter and updates the value it points to to `98`.
* Prototype: `void reset_to_98(int *n);`

#### `1-swap.c`
Function that swaps the values of two integers.
* Prototype: `void swap_int(int *a, int *b);` 

#### `2-strlen.c`
Function that returns the length of a string. Similar to `strlen` (`man strlen` for more info).
* Prototype: `int _strlen(char *s);`

#### `3-puts.c`
Function that prints a string with a new line. Similar to `puts` (`man puts` for more info).
* Prototype: `void _puts(char *str);`

#### `4-print_rev.c`
Function that prints a string in reverse followed by a new line.
* Prototype: `void print_rev(char *s);`

#### `5-rev_string.c`
Function that reverses a string.
* Prototype: `void rev_string(char *s);`

#### `6-puts2.c`
Function that prints one char out of 2 of a string, followed by a new line.
* Prototype: `void puts2(char *str);`
* Note: Function prints the first of the two characters

#### `7-puts_half.c`
Function that prints the second half of a string, followed by a new line. 
* Prototype: `void puts_half(char *str);`
* Note: if the number of characters in the string is odd, the function prints the `(length_of_the_string - 1) / 2`

#### `8-print_array.c`
Function that prints `n` elements of an array of integers, followed by a new line.
* Prototype: `void print_array(int *a, int n);`
	* `n` is the number of elements to be printed
	* Numbers are seperated by a comma and space
	* Numbers are displayed in the same order they are stored

#### `9-strcpy.c`
Function that copies the string pointed to by `src`, including the terminating byte `\0`, to the buffer pointed to by `dest`/
Similar to the function `strcpy` (`man strcpy` for more info).
* Prototype: `char *_strcpy(char *dest, char *src);`
* Returns: pointer to `dest`
