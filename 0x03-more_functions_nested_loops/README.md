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
All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
All code is written in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki
Protoypes of all functions used are included in header file `holberton.h`

## Tasks

#### 0. isupper
Function that checks for uppercase character. Similar to `isupper` (`man isupper` for more info).
* Prototype: `int _isupper(int c);`
* Returns:
	* `1` if `c` is uppercase
	* `0` if not
* File: `0-isupper.c`

#### 1. isdigit
Function that checks for a digit (`0` through `9`).
* Prototype: `int _isdigit(int c);`
* Returns:
	* `1` if `c` is a digit
	* `0` if not
* File: `1-isdigit.c`

#### 2. Collaboration is multiplication
Function that multiplies two integers.
* Prototype: `int mul(int a, int b);`
* Returns: The result of the integers multiplied.
* File: `2-mul.c`

#### 3. The numbers speak for themselves
Function that prints the numbers `0` to `9`.
* Prototype: `void print_numbers(void);`
* File: `3-print_numbers.c`

#### 4. I believe in numbers and signs
Function that prints `0` to `9` except `2` and `4`.
* Prototype: `void print_most_numbers(void);`
* File: `4-print_most_numbers.c`

#### 5. Numbers constitute the only universal language
Function that prints 0 to 14 ten times. 
* Prototype: `void more_numbers(void);`
* File: `5-more_numbers.c`

#### 6.  The shortest distance between two points is a straight line
Function that draws a straight line in terminal. 
* Prototype: `void print_line(int n);`
	* `n` is the number of times to print the character `_`
	* if `n` <= `0`, only print `\n`
* File: `6-print_line.c`

#### 7. I feel like I am diagonally parked in a parallel universe
Function to draw a diagonal line on terminal. 
* Prototype: `void print_ddiagonal(int n);`
	* `n` is the number of times to print the character `\`
	* if `n` is <= `0`, only print `\n`
* File: `7-print_diagonal.c`

#### 8. You are so much sunshine in every square inch
Function that prints a square. 
* Prototype: `void print_square(int size);`
	* `size` is the size of square
	* if `size` <= `0`, it only prints `\n`
* Note: The character `#` is used to print the square.
* File: `8-print-square.c`

#### 9. Fizz-Buzz
Program that prints the numbers from `1` to `100`. 
* Notes: 
	* If the number is a multiple of 3, print `Fizz` instead of the number
	* If the number is a multiple of 5, print `Buzz` instead of the number
	* If the number is both a multiple of 3 and 5, print `FizzBuzz` instead of the number
	* Each number or word is followed by a space
* File: `9-fizz_buzz.c`

#### 10. Triangles
Function that prints a triangle. 
* Prototype: `void print_triangle(int size);`
	* `size` is the size of the triangle
	* if `size` <= `0`, prints a new line
* Note: The character `#` is used to print the triangle.
* File: `10-print_triangle.c`

#### 11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic
Program that finds and prints the largest prime factor of the number `612852475143`. 
* Note: program should be compiled with `gcc -Wall -pedantic -Wextra 100-prime_factor.c -o 100-prime_factor -lm`
* File: `100-prime_factor.c`

#### 12. Numbers have life; they're not just symbols on paper
Function that prints and integer. 
* Prototype: `void print_number(int n);`
* File: `101-print_number.c`
