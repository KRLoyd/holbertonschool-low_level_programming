# 0x07. C - Recursion

## Description
The files in this folder are all about recursion practice in C!

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

##### [0-puts_recursion.c](0-puts_recursion.c)
Function that prints a string, followed by a new line. Similar to the C standard library function `puts`; run `man puts` for more information.
* Prototype: `void _puts_recursion(char *s);`
	* @s: string to print

#### [1-print_rev_recursion.c](1-print_rev_recursion.c)
Function that prints a string in reverse.
* Prototype: `void _print_rev_recursion(char *s);`
    * @s: string to print

#### [2-strlen_recursion.c](2-strlen_recursion.c)
Function that returns the length of a string. Similar to C standard library function `strlen`; run `man strlen` for more information.
* Prototype: `int _strlen_recursion(char *s);`
    * @s: string to evaluate

#### [3-factorial.c](3-factorial.c)
Function that returns the factorial of a number.
* Prototype: `int factorial(int n);`
    * @n: number to evaluate
    * Returns:
        * factorial of `n`
        * -1 if n is negative

#### [4-pow_recursion.c](4-pow_recursion.c)
Function that returns the value of an integer raised to the power of a second integer.
* Prototype: `int _pow_recursion(int x, int y);`
    * @x: first integer
    * @y: second integer (to raise `x` to)
    * Returns:
        * value of `x` raised to `y`
        * -1 if `y` is negative

#### [5-sqrt_recursion.c](5-sqrt_recursion.c)
Function that returns the natrual square root of a number. The C standard library has a similar function: `sqrt`. Run `man sqrt` for more information.
* Prototype: `int _sqrt_recursion(int n);`
    * @n: number to evaluate
    * Returns:
        * the square root of `n`
        * -1 if `n` does not have a natural square root

#### [6-is_prime_number.c](6-is_prime_number.c)
Function that determines if an integer is a prime number.
* Prototype: `int is_prime_number(int n);`
    * @n: number to evaluate
    * Returns:
        * 1 if `n` is a prime number
        * 0 if `n` is not a prime number

#### [7-is_palindrome.c](7-is_palindrome.c)
Function that determines if a string is a palindrome.
* Prototype: `int is_palindrome(char *s);`
    * @s: string to evaluate
    * Returns:
        * 1 if `s` is a palindrome
        * 0 if `s` is not a palindrome

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
