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
All programs and functions must be compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
All code will be in Betty style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki

## Tasks

#### 0. Positive anything is better than negative nothing
Program that prints `Holberton`.
* Program return: `0`
* File: `0-holberton.c`

#### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Function that prints the alphabet, in lowercase.
* Prototype: `void print_alphabet(void);`
* File: `1-alphabet.c`

#### 2. 10 x alphabet
Function that prints 10 times the alphabet, in lowercase. 
* Prototype: `void print_alphabet_10x(void);`
* File: `2-print_alphabet_x10.c`

#### 3. islower
Function that checks for lowercase character. Similar to `islower` (`man islower` for more info)
* Prototype: `int _islower(int c);`
* Returns: 
	* `1` if `c` is lowercase
	* `0` if not
* File: `3-islower.c`

#### 4. isalpha
Function that checks for alphabetic character. Similar to `isalpha` (`man isalpha` for more info)
* Prototype: `int _isalpha(int c);`
* Returns:
	* `1` if `c` is a letter (upper- or lowercase)
	* `0` if not
File: `4-isalpha.c`

#### 5. Sign
Function that prints the sign of a number.
* Prototype: `int print_sign(int n);`
* Returns:
	* `1` and prints `+` if n > 0
	* `0` and prints `0` if n == 0
	* `-1` and prints `-` if n < 0
* File: `5-sign.c`

#### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Function that computes the absoulte value of an integer. Similar to `abs` (`man abs` for more info).
* Prototype: `int _abs(int);`
* File: `6-abs.c`

#### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Function that prints the last digit of a number. 
* Prototype: `int print_last_digit(int);`
* Returns: value of the last digit
* File: `7-print_last_digit.c`

#### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
Function that prints every minute of Jack Bauer's day, starting from 00:00 to 23:59.
* Prototype: `void jack_bauer(void);`
* File: `8-24_hours.c`

#### 9. Learn your times table
Function that prints the 9 times table, starting with 0.
* Prototype: `void times_table(void);`
* File: `9-times_table.c`

#### 10. a + b
Function that adds two integers and returns the result.
* Prototype: `int add(int, int);`
* File: `10-add.c`

#### 11. Holberton School, 98 Battery Street, San Francisco CA 94111
Function that prints all natural numbers from `n` to `98`.
* Prototype: `void print_to_98(int n);`
* Notes:
	* Numbers separated by `, `
	* Numbers are printed in order
	* The first number printed is `n`
	* The last number printed is `98`
* File: `11-print_to_98.c`

#### 12. The World looks like a multiplication-table, or a mathematecal equation, which, turn it how you will, balances itself
Function that prints the `n` times table, starting with 0.
* Prototype: `void print_times_table(int n);`
* Prints:
	* times table, if 0 < n < 15
	* nothing, if n < 0 && n > 15
* File: `100-times_table.c`

#### 13. Nature made the natural numbers; All else is the work of women
Program that computes and prints the sum of all the mulitples of `3` or `5` below `1024`. 
* File: `101-natural.c`

#### 14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead I wrote a program that would steal passwords of students. My teacher gave me an A
Program that prints the first 50 Fibonacci numbers, starting with `1` and `2`. 
* Note: Numbers are separated by `, `
* File: `102-fibonacci.c`

#### 15. Even Liber Abbaci
Program that finds and prints the sum of even valued terms of the Fibonacci sequence under 4,000,000.
* File: `103-fibonacci.c`

#### 16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead I wrote a program that would steal passwords of students. My teacher gave me an A+
*DOES NOT WORK PROPERLY YET*
Program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`.
* Notes: 
	* Numbers are separated by `, `
* File: `104-fibonacci.c`
