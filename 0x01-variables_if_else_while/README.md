# 0x01. C - variables, if, else, while

## Purpose
To be able to explain the following:
* What are the arithmetic operators and how to use them
* What are the logical operators (also known as boolean operators) and how to use them
* What are the relational operators and how to use them
* What values are considered TRUE and FALSE in C
* How to use the `if`, `if ... else` statements
* How to use comments
* How to declare variables of types `char`, `int`, `unsigned int`, with `printf`
* How to use the `while` loop
* How to use variables with the `while` loop
* How to print variables using `printf`
* What is the `ASCII` character set
* What are the purpose of the `gcc` flags `-m32` and `-m64`

### Project Notes
* All programs and functions will be compiled with `gcc -Wall -Werror -Wextra -pedantic` version `4.8.4`
* All code will be in `Betty` style. Information about this style can be found at https://github.com/holbertonschool/Betty/wiki

## Tasks
#### 0. Positive anything is better than negative nothing
Program that assigned a random number to variable `n` each time it's executed.
* Program output: the number and
	* if number > 0: `is positive`
	* if number == 0: `is zero`
	* if number < 0: `is negative`
* File: `0-positive_or_negative`

#### 1. The last digit
Program that assigned a random number to variable `n` each time it's executed and prints the last digit of the number.
* Program output: `Last digit of`, value of `n`, `is`, and
	* if `n` > 5: `and is greater than 5`
	* if `n` == 0: `and is 0`
	* if `n` < 6 && `n` != 0: `and is less than 6 and not 0`
* File: `1-last_digit.c`

#### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Program that prints the alphabet in lowercase. 
* File: `2-print_alphabet.c`

#### 3. When I was having that alphabet soup, I never thought that it would pay off
Program that prints the alphabet in lowercase, excluding `q` and `e`.
* File: `4-print_alphabt.c`

#### 4. alphABET
Program that prints the alphabet in lowercase and then in uppercase.
* File: `3-print_alphabets.c`

#### 5. Numbers
Program that prints all single digit numbers of base 10 starting from `0`. 
* File: `5-print_numbers.c`

#### 6. Numberz
Program that prints all single digit numbers of base 10 starting from `0`, without using type `char` and only using `putchar` twice.
* File: `6-print_numberz.c`

#### 7. Smile in the mirror
Program that prints the lowercase alphabet in reverse. 
* File: `7-print_tebahpla.c`

#### 8. Hexadecimal
Program that prints all the numbers of base 16 in lowercase. 
* File: `8-print_base16.c`

#### 9. Patience, persistence and perspiration make an unbeatable combination for success
Program that prints all possible combinations of single-digit numbers. 
* Notes:
	* Numbers are separated by `, `
	* Numbers are printed in ascending order
* File: `9-print_comb.c`

#### 10. 00...99
Program that prints the numbers from `00` to `99`
* Notes:
	* Numbers are separated by `, `
	* Numbers are printed in ascending order
* File: `10-print_comb2.c`

#### 11. Inventing is a combination of brains and materials. The more brains you use, the less material you need
Program that prints all possible different combinations of two digits. 
* Notes:
	* Numbers are separated by `, `
	* `01` and `10` are considered the same combination of the two digits `0` and `1`
	* The smallest combination of 2 digits is used and all are printed in ascending order
* File: `100-print_comb3.c`

#### 12. The success combination in business is: Do what you do better... and: do more of what you do...
Program that prints all possible combinations of three digits.
* Notes:
	* Numbers are separated by `, `
	* `012`, `120`, `102`, `021`, `201`, and `210` are considered the same combination of the three digits `0`, `1` and `2`
	* The smallest combination of 3 digits is used and all are printed in ascending order
* File: `100-print_comb3.c`

#### 13. Software is eating the World
Program that prints all possible combinations of two two-digit numbers
* Notes: 
	* Numbers range from `0` to `99`, but all are printed with two digits. ('1' is '01')
	* The number combinations are separated by a state, with each number combination separated by `, `
* File: `102-print_comb5.c`
