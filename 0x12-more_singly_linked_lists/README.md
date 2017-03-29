# 0x12. C - More singly linked lists

## Purpose
* More practice with linked lists

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.05.5 LTS.
Tests done in VirtualBox on Ubuntu via Vagrant(1.8.6).

#### Data Structure
The following data structure was provided by Holberton School for this project:
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

#### Compilation
All programs and functions should be compiled with `gcc 4.8.4`(`C90`).
Specifically, `gcc -Wall -Werror -Wextra -pedantic`.

#### Style
All files are written in the Holberton/Betty style.
More information on this style can be found at https://github.com/holbertonschool/Betty/wiki

## Files

##### `lists.h`
Header file which includes all prototypes used in the project and the data structure to be used for `listint_t` lists.

##### `0-print_listint.c`
Function that prints all elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`
	* @h: `listint_t` list to evaluate
	* Return: number of nodes in the list

##### `1-listint_len.c`
Function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);`
	* @h: `listint_t` list to evaluate
	* Return: number of nodes in the list

##### `2-add_nodeint.c`
Function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
	* @head: first element of a `listint_t`list
	* @n: data to copy into new node
	* Return: address of the new node, or `NULL` if fails

##### `3-add_nodeint_end.c`
Function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
	* @head: first element of a `listint_t` list
	* @n: data to copy into new node
	* Return: address of new node, `NULL` if fails

##### `4-free_listint.c`
Function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`
	* @head: `listint_t` list to evaluate
To check if memory has been free'd properly, use `valgrind ./file_name`.
	If memory was free'd you will this message in the HEAP SUMMARY: `All heap blocks were freed -- no leaks are possible`

##### `5-free_listint2.c`
Function that frees a `listint_t` list and sets `head` to `NULL`.
* Prototype: `void free_listint2(listint_t **head);`
	* @head: `listint_t` list to free
To check if memory has been free'd properly, use `valgrind ./file_name`.
	If memory was free'd you will this message in the HEAP SUMMARY: `All heap blocks were freed -- no leaks are possible`

##### `6-pop_listint.c`
Function that deletes the head node of a `listint_t` list.
* Prototype: `int pop_listint(listint_t **head);`
	* @head: `listint_t` list to evaluate
	* Return: deleted node's data (`n`), if linked list is empty, returns `0`

##### `7-get_nodeint.c`
Function that returns the nth node of a `listint_t` list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
	* @head: `listint_t` list to evaluate
	* @index: index of the node, starting at `0`
	* Return: the node at index, or `NULL` if it doesn't exist

##### `8-sum_listint.c`
Function that returns the sum of all data (n) of a `listint_t` list.
* Prototype: `int sum_listint(listint_t *head);`
	* @head: `listint_t` list to evaluate
	* Return: Sum of all data (n) in the list, or `0` if it is empty

##### `9-insert_nodeint.c`
Function that inserts a node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
	* @head: `listint_t` list to evaluate
	* @idx: inded of the list where the new node should be added, index begins at `0`
	* Return: the new node, or `NULL` if failed

##### `10-delete_nodeint.c`
Function that deletes the node at index `index` of a `listint_t` list.
* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
	* @head: `listint_t` list to evaluate
	* @index: index of the node that should be deleted, index of `listint_t` lists starts at `0`
	* Return: 1 (SUCCESS), -1 (FAILURE)

##### `100-reverse_listint.c`
Function that reverses a `listint_t` list.
* Prototype: `listint_t *reverse_listint(listint_t **head);`
	* @head: `listint_t` list to reverse
	* Return: pointer to the first node of the reversed list

##### ***NOT COMPLETED*** `101-print_listint_safe.c`
Function that prints a `listint_t` list. The list may have a loop, but only prints it once. 
* Prototype: `size_t print_listint_safe(const listint_t *head);`
	* @head: list to print
	* Return: number of nodes in the list, exit status `98` upon failure

