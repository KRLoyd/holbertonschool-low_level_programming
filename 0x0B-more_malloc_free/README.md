# 0x0B. C - More malloc, free

## Description
Tasks completed with these files are more practice with memory allocation.

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

##### [0-malloc_checked.c](0-malloc_checked.c)
Function that allocates memory using `malloc`.
* Prototype: `void *malloc_checked(unsigned int b);`
	* @b: number of bytes to allocate

##### [1-string_nconcat.c](1-string_nconcat.c)
Function that concatenates two strings.
* Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
    * @s1: first string
    * @s2: second string
    * @n: number of bytes of `s2` to be concatenated to `s1`
    * Returns: pointer to the newly allocated space in memory, contains `s1` and th efirst `n` bytes of `s2`

##### [2-calloc.c](2-calloc.c)
Function that allocates memory for an array using `malloc`. Similar to the C standard library `calloc`. Run `man calloc` for more information.
* Prototype: `void *_calloc(unsigned int nmemb, unsinged int size);`
    * @nmemb: number of elements to allocate for
    * @size: number of bytes in an element
    * Returns: 
        * Success: pointer to allocated memory
        * Failure: `NULL`

##### [3-array_range.c](3-array_range.c)
Function to create an array of integers.
* Prototype: `int *array_range(int min, int max);`
    * @min: minimun value to include in the array
    * @max: maximum value to include in the array
    * Returns:
        * Success: pointer to the newly created array
        * Failure: `NULL`

##### [100-realloc.c](100-realloc.c)
Function to reallocate a memory block using `malloc` and `free`. Similar to the C standard library function `realloc`. Run `man realloc` for more information.
* Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
    * @ptr: pointer to memory previously allocated with a call to `malloc`
    * @old_size: size, in bytes, of the allocated space for `ptr`
    * @new_size: new size, in bytes, of the new memory block
    * Returns:
        * If `new_size` == `old_size`: nothing is done and `ptr` is returned
        * If `ptr` is `NULL`: call is equivalent to `malloc(new_size)`
        * If `new_size` == 0 and `ptr` is not `NULL`: call is equivalent to `free(ptr)` and returns `NULL`


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
