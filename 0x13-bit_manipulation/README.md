# 0x13. C - Bit Manipulation

## Purpose
* How to manipulate bits and use bitwise operators

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

##### `holberton.h`
Header file which includes all prototypes used in the project and the data structure to be used for `listint_t` lists.

##### `0-binary_to_uint.c`
Function that converts a binary number to an `unsigned int`.
* Prototype: `unsigned int binary_to_uint(const char *b);`
	* @b: pointer to a string of the chars `0` and `1`
	* Return: the converted number, or 0 if a character in b is not `0` or `1` or if b is `NULL`

##### `1-print_binary.c`
Function that prints the binary representation of a number.
* Prototype: `void print_binary(unsigned long int n);`
	* @n: base 10 number to represent in binary

##### `2-get_bit.c`
Function that returns the value of a bit at a given index.
* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
	* @n: number to evaluate
	* @index: index of bit, index starts at `0`
	* Return: value of the bit at `index` or `-1` if failed

##### `3-set_bit.c`
Function that sets the value of a bit at a given index to `1`.
* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
	* @n: number to evaluate
	* @index: index of bit to set, index starts at `0`
	* Return: `1` if it worked, `-1` if failed

##### `4-clear_bit.c`
Function that sets the value at a given index to `0`.
* Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
	* @n: number to evaluate
	* @index: index of the bit to set, index starts at `0`
	* Return: `1` if it worked, `-1` if failed

##### `5-flip_bits.c`
Function that returns the number of bits needed to flip to get from one number to another.
* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
	* @n: first number
	* @m: second number
	* Return: number of bits that would need to be flipped
