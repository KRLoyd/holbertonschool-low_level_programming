# 0x16. C - Doubly linked lists

## Description
To be able to explain the following:
* What is a doubly linked list
* How to use doubly linked lists

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests done in VirtualBox on Ubuntu via Vagrant(1.8.6) and all files compiled with `gcc -Wall -Werror -Wextra -pedantic` (version 4.8.4).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file `lists.h`. The following data structure found in `lists.h` was provided by Holberton School. 
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Files
[0-print_dlistint.c](0-print_dlistint.c)

Function that prints all elements of a `dlistint_t` list.
* Prototype: `size_t print_dlistint(const dlistint_t *h);`
    * @h: pointer to the first element of the list
    * Return: number of nodes in the list

[1-dlistint_len.c](1-dlistint_len.c)

Function that finds the number of elements in a `dlistint_t` list.
* Prototype: `size_t dlistint_len(const dlistint_t *h);`
    * @h: pointer to the first element of the list
    * Return: number of nodes in the list

[2-add_dnodeint.c](2-add_dnodeint.c)

Function that adds a new node at the beginning of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    * @head: pointer to a pointer to the first element in a `dlistint_t` list
    * @n : value of n in the new element
    * Return:
        * Success: address of the new element
        * Failure: `NULL`

[3-add_dnodeint_end.c](3-add_dnodeint_end.c)

Function that adds a new node at the end of a `dlistint_t` list.
* Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
    * @head: pointer to a pointer to the first element in a `dlistint_t` list
    * @n: value of n in the new element
    * Return:
        * Success: address of the new element
        * Failure: `NULL`

[4-free_dlistint.c](4-free_dlistint.c)

Function that frees a `dlistint_t` list.
* Prototype: `void free_dlistint(dlistint_t *head);`
    * @head: pointer to the first element in a `dlistint_t` list

[5-get_dnodeint.c](5-get_dnodeint.c)

Function that returns the nth node of a `dlistint_t` list.
* Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    * @head: pointer to the first element in a `dlistint_t` list
    * @index: index of the node to find, starting from `0`
    * Return:
        * Success: `index` node of the list
        * Failure: `NULL`

[6-sum_dlistint.c](6-sum_dlistint.c)

Function that returns the sum of all the data (n) of a `dlistint_t` list.
* Prototype: `int sum_dlistint(dlistint_t *head);`
    * @head: pointer to the first element in a `dlistint_t` list
    * Return:
        * sum of all the data in the list
        * if the list is empty: `0`

[7-insert_dnodeint.c](7-insert_dnodeint.c)

Function that inserts a new node at a given position, `idx`.
* Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
    * @h: pointer to a pointer to the first element in a `dlistint_t` list
    * @idx: position to insert the new node
    * @n: value to store in the new node's `n`
    * Return:
        * Success: address of the new node
        * Failure: `NULL`

[8-delete_dnodeint.c](8-delete_dnodeint.c)

Function that deletes the node at index `index` of a `dlistint_t` list.
* Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
    * @head: pointer to a pointer to the first element of a `dlistint_t` list
    * @index: index of the node to be deleted, starts at `0`
    * Return:
        * Success: `1`
        * Failure: `-1`

[print_rev.c](print_rev.c)

Function to print all elements of a `dlistint_t` list in reverse.
* Prototype: `size_t print_rev(const dlistint_t *h);`
    * @h: pointer to the first element of a `dlistint_t` list
    * Return: number of nodes in the list

## Authors
Kristen Loyd        <a href='https://github.com/KRLoyd'>Github</a> ,  <a href='https://www.linkedin.com/in/kristen-loyd-34984a92/'>Linkedin</a>

## License
Public Domain, no copyright protection
