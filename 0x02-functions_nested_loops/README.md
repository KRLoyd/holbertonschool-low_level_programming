# 0x02. C - functions, nested loops

## Purpose
To be able to explain the following:
* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the `gcc` flags `-Wall -Werror -pedantic -Wextra`
* What are header files and how to use them with `#include#`

### Project Notes
* All programs and functions must be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
* All code will be in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki

## Files
#### `0-holberton.c`
Program that prints `Holberton`.
* Program return: `0`

#### `1-alphabet.c`
Function that prints the alphabet, in lowercase.
* Prototype: `void print_alphabet(void);`

#### `2-print_alphabet_x10.c`
Function that prints 10 times the alphabet, in lowercase. 
* Prototype: `void print_alphabet_10x(void);`

#### `3-islower.c`
Function that checks for lowercase character. Similar to `islower` (`man islower` for more info)
* Prototype: `int _islower(int c);`
* Returns: 
	* `1` if `c` is lowercase
	* `0` if not

#### `4-isalpha.c`
Function that checks for alphabetic character. Similar to `isalpha` (`man isalpha` for more info)
* Prototype: `int _isalpha(int c);`
* Returns:
	* `1` if `c` is a letter (upper- or lowercase)
	* `0` if not

#### `5-sign.c`
Function that prints the sign of a number.
* Prototype: `int print_sign(int n);`
* Returns:
	* `1` and prints `+` if n > 0
	* `0` and prints `0` if n == 0
	* `-1` and prints `-` if n < 0

#### `6-abs.c`
Function that computes the absoulte value of an integer. Similar to `abs` (`man abs` for more info).
* Prototype: `int _abs(int);`

#### `7-print_last_digit.c`
Function that prints the last digit of a number. 
* Prototype: `int print_last_digit(int);`
* Returns: value of the last digit

#### `8-24_hours.c`
Function that prints every minute of Jack Bauer's day, starting from 00:00 to 23:59.
* Prototype: `void jack_bauer(void);`

#### `9-times_table.c`
Function that prints the 9 times table, starting with 0.
* Prototype: `void times_table(void);`

#### `10-add.c`
Function that adds two integers and returns the result.
* Prototype: `int add(int, int);`

#### `11-print_to_98.c`
Function that prints all natural numbers from `n` to `98`.
* Prototype: `void print_to_98(int n);`
* Notes:
	* Numbers separated by `,` and a space
	* Numbers are printed in order
	* The first number printed is `n`
	* The last number printed is `98`

#### `100-times_table.c`
Function that prints the `n` times table, starting with 0.
* Prototype: `void print_times_table(int n);`
* Prints:
	* times table, if 0 < n < 15
	* nothing, if n < 0 && n > 15

#### `101-natural.c`
Program that computes and prints the sum of all the mulitples of `3` or `5` below `1024`. 

#### `102-fibonacci.c`
Program that prints the first 50 Fibonacci numbers, starting with `1` and `2`. 
* Note: Numbers are separated by `,` and a space

#### `103-fibonacci.c`
Program that finds and prints the sum of even valued terms of the Fibonacci sequence under 4,000,000.

#### `104-fibonacci.c`

*DOES NOT WORK PROPERLY YET*

Program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`.
* Notes: 
	* Numbers are separated by `,` and a space
