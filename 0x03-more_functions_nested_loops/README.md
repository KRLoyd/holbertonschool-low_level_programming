# 0x03. C - more functions, more nested loops

## Purpose
To be able to explain the following:
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the `gcc` flags `-Wall -Werror -pedantic -Wextra`
* What are header files and how to use them with `#include`

### Project Notes
* All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
* All code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki
* Protoypes of all functions used are included in header file `holberton.h`

## Files
#### `0-isupper.c`
Function that checks for uppercase character. Similar to `isupper` (`man isupper` for more info).
* Prototype: `int _isupper(int c);`
* Returns:
	* `1` if `c` is uppercase
	* `0` if not

#### `1-isdigit.c`
Function that checks for a digit (`0` through `9`).
* Prototype: `int _isdigit(int c);`
* Returns:
	* `1` if `c` is a digit
	* `0` if not

#### `2-mul.c`
Function that multiplies two integers.
* Prototype: `int mul(int a, int b);`
* Returns: The result of the integers multiplied.

#### `3-print_numbers.c`
Function that prints the numbers `0` to `9`.
* Prototype: `void print_numbers(void);`

#### `4-print_most_numbers.c`
Function that prints `0` to `9` except `2` and `4`.
* Prototype: `void print_most_numbers(void);`

#### `5-more_numbers.c`
Function that prints 0 to 14 ten times. 
* Prototype: `void more_numbers(void);`

#### `6-print_line.c`
Function that draws a straight line in terminal. 
* Prototype: `void print_line(int n);`
	* `n` is the number of times to print the character `_`
	* if `n` <= `0`, only print `\n`

#### `7-print_diagonal.c`
Function to draw a diagonal line on terminal. 
* Prototype: `void print_ddiagonal(int n);`
	* `n` is the number of times to print the character `\`
	* if `n` is <= `0`, only print `\n`

#### `8-print-square.c`
Function that prints a square. 
* Prototype: `void print_square(int size);`
	* `size` is the size of square
	* if `size` <= `0`, it only prints `\n`
* Note: The character `#` is used to print the square.

#### `9-fizz_buzz.c`
Program that prints the numbers from `1` to `100`. 
* Notes: 
	* If the number is a multiple of 3, print `Fizz` instead of the number
	* If the number is a multiple of 5, print `Buzz` instead of the number
	* If the number is both a multiple of 3 and 5, print `FizzBuzz` instead of the number
	* Each number or word is followed by a space

#### `10-print_triangle.c`
Function that prints a triangle. 
* Prototype: `void print_triangle(int size);`
	* `size` is the size of the triangle
	* if `size` <= `0`, prints a new line
* Note: The character `#` is used to print the triangle.

#### `100-prime_factor.c`
Program that finds and prints the largest prime factor of the number `612852475143`. 
* Note: program should be compiled with `gcc -Wall -pedantic -Wextra 100-prime_factor.c -o 100-prime_factor -lm`

#### `101-print_number.c`
Function that prints and integer. 
* Prototype: `void print_number(int n);`
