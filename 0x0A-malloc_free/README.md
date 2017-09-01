# 0x0A. C - malloc, free

## Description
Files in this folder are for tasks to become familiar with the allocation with space using `malloc` and `free`.

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

##### [0-create_array.c](0-create_array.c)
Function that creates an array of chars and initializes the array with a specific character.
* Prototype: `char *create_array(unsigned int size, char c);`
	* @size: size of the array to create
    * @c: character to fill the array with
	* Returns:
        * pointer to the array
        * `NULL` if size is 0 or if the allocation fails

#### [1-strdup.c](1-strdup.c)
Function that copies a string given as a parameter to a new memory location. Similar to the C standard library function `strdup`. Run `man strdup` for more information.
* Prototype: `char *_strdup(char *str);`
    * @str: string to copy
    * Returns:
        * pointer to the duplicated string
        * `NULL` if `str` is `NULL` or if insufficient memory was available

#### [2-str_concat.c](2-str_concat.c)
Function that concatenates two strings.
* Prototype: `char *str_concat(char *s1, char *s2);`
    * @s1: first string, to appear first
    * @s2: second string, to appear second
    * Returns:
        * pointer to the newly allocated space in memory holding the new string
        * `NULL` if it fails

#### [3-alloc_grid.c](3-alloc_grid.c)
Function to create a 2 dimensional array of integers with each element of the grid initialized to 0.
* Prototype: `int **alloc_grid(int width, int height);`
    * @width: width of the grid to create
    * @height: height of the grid to create
    * Returns:
        * pointer to the new array
        * `NULL` upon failure or if `width` or `height` are less than or equal to 0

#### [4-free_grid.c](4-free_grid.c)
Function that frees a 2 dimensional grid of integers.
* Prototype: `void free_grid(int **grid, int height);`
    * @grid: grid to free
    * @height: height of the grid

#### [5-argstostr.c](5-argstostr.c)
Function that concatenates all the arguments of the program.
* Prototype: `char *argstostr(int ac, char **av);`
    * @ac: number of arguments passed
    * @av: pointer to the array of arguments passed
    * Returns:
        * pointer to the new string
        * `NULL` if it fails

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
