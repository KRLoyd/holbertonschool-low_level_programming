# 0x0E. C - Function pointers

## Description
Files in this directory correspond to tasks in this Holberton School project to have practice working with pointers and function pointers. 

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file `function_pointers.h`.

## Tasks:

##### [0-print_name.c](0-print_name.c)
Fuction that prints a name.
* Prototype: `void print_name(char *name, void (*f)(char *));`
  * @name: name to print
  * @f: function pointer, takes in the name to print
  
##### [1-array_iterator.c](1-array_iterator.c)
Function that executes a function given as a parameter on each element of an array.
* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
  * @array: pointer to the array to be manipulated
  * @size: size of the array
  * @action: pointer to the function to use

##### [2-int_index.c](2-int_index.c)
Function that searches for an integer.
* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
  * @array: pointer to the array to evaluate
  * @size: number of elements in array `array`
  * @cmp: function to use
  * Returns
    * Success: index of the first element for which `cmp` function doesn't return `0`
    * Failure: returns `-1` if no element matches or if size <= `0`

##### Task 3
Program that performs simple operations.
* Compilation and examples:
```
$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
$ ./calc 1 + 1
2
$ ./calc 97 + 1
98
$ ./calc 1024 / 10
102
$ ./calc 1024 '*' 98
100352
$ ./calc 1024 '\*' 98
Error
$ ./calc 1024 - 98
926
$ ./calc 1024 '%' 98
44
$
```
* Files:
  * [3-calc.h](3-calc.h)
    * Header file to hold all function prototypes and data structures used.
  * [3-op_fuctions.c](3-op_functions.c)
    * Functions:
      * `op_add`
        * Returns the sum of `a` and `b`
        * Prototype: `int op_add(int a, int b);`
      * `op_sub`
        * Returns the difference of `a` and `b`
        * Prototype: `int op_sub(int a, int b);`
      * `op_mul`
        * Returns the product of `a` and `b`
        * Prototype: `int op_mul(int a, int b);`
      * `op_div`
        * Returns the result of the division of `a` by `b`
        * Prototype: `int op_div(int a, int b);`
      * `op_mod`
        * Returns the remainder of the division of `a` by `b`
        * Prototype: `int op_mod(int a, int b);`
  * [3-get_op_func.c](3-get_op_func.c)
    * Function that selects the correct function to perform the operation asked by the user.
    * Prototype: `int *get_op_func(char *s))(int, int);`
      * @s: operator passed as argument to the program
      * Returns: pointer to the function that corresponds to the operator given as a parameter
  * [3-main.c](3-main.c)
    *   Main function as entry point.


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
