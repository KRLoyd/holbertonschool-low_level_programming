# 0x0D.C - Structures, typedef

## Description
Files in this directory correlate with Holberton School tasks in this project to learn more about structures and how to use `typedef`.

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).


## Files
All files must be executable to run. To add executable permissions to any file: `chmod u+x file_name`

##### [dog.h](dog.h)
Header file to hold all prototypes of functions and define a new type `dog_t` for type `struct dog`.
* `struct dog` info:
	* `name`, type = `char *`
	* `age`, type = `float`
  * `owner`, type = `char *`

##### [1-init_dog.c](1-init_dog.c)
Function that initializes a varibale of type `struct dog`.
* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
  * @d: pointer to the a struct to intitialize
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner of dog

##### [2-print_dog.c](2-print_dog.c)
Function that prints a `struct dog`.
* Prototype: `void print_dog(struct dog *d):`
  * @d: pointer to the struct to print
* Notes:
  * If an element of `d` is `NULL`, `(nil)` is printed in it's place
  * If `d` is `NULL`, nothing is printed

##### [4-new_dog.c](4-new_dog.c)
Function to create a new dog.
* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
  * @name: name of the dog
  * @age: age of dog
  * @owner: name of dog owner
  * Returns
    * Success: pointer to the new dog
    * Failure: `NULL`

##### [5-free_dog.c](5-free_dog.c)
Funciton that frees dogs.
* Prototype: `void free_dog(dog_t *d);`
  * @d: pointer to the dog_t struct to free


## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection
