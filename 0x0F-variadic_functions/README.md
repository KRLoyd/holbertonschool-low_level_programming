# Project: 0x0F. C - Variadic functions

## Purpose
To be able to explain the following:
* What are variadic functions
* How to use va_start, va_arg, and va_end macros
* Why and how to use the const type qualifier

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.05.5 LTS.
Tests done in VirtualBox on Ubuntu via Vagrant(1.8.6).

#### Compilation
All programs and functions should be compiled with `gcc 4.8.4`(`C90`).
Specifically, `gcc -Wall -Werror -Wextra -pedantic`.

#### Style
All files are written in the Holberton/Betty style.
More information on this style can be found at https://github.com/holbertonschool/Betty/wiki

## Files

##### `variadic_functions.h`
Header file which includes all prototypes used in the project.

##### `0-sum_them_all.c`
Function that returns the sum of all its parameters.
* Prototype: `int sum_them_all(const unsigned int n, ...);`
     * @n: number of parameters passed to the function
     * Return: Sum of all parameters, `0` if `n == 0`

##### `1-print_numbers.c`
Function that prints numbers, followed by a new line.
* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
	* @separator: string to be printed between numbers
	* @n: number of integers passed to the function

##### `2-print_strings.c`
Function that prints strings, followed by a new line.
* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
	* @separator: string to be printed between strings
	* @n: number of strings passed to the function
	* Note: If `separator == NULL`, it is not printed. If a passed string is `NULL`, `(nil)` is printed.

##### `3-print_all.c`
Function that prints anything.
* Prototype: `void print_all(const char * const format, ...);`
	* @format: list of types of arguments passed to the function
* Types of formats available:
	* `c`: char
	* `i`: integer
	* `f`: float
	* `s`: char * (if the string is `NULL`, `(nil)` is printed. 
