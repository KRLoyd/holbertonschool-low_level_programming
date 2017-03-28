# 0x11. C - Singly linked lists

## Purpose
Be able to explain the following:
* When and why you use linked lists vs. arrays
* How to build and use linked lists

### Project Notes
#### Data Structure
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

#### Compilation
All programs and functions should be compiled with `gcc 4.8.4`(`C90`).
Specifically, `gcc -Wall -Werror -Wextra -pedantic`.

#### Style
All files are written in the Holberton/Betty style.
More information on this style can be found at https://github.com/holbertonschool/Betty/wiki

## Files
#### `0-print_list.c`
Function that prints all the elements of a `list_t` list.
* Prototype: `size_t print_list(const list_t *h);`
	* @h: `list_t` list to evaluate
	* Return: number of nodes in the list

#### `1-list_len.c`
Function that counts the number of elements in a `list_t`list.
* Prototype: `size_t list_len(const list_t *h);`
	* @h: `list_t` list to evaluate
	* Return: number of elements in the list

#### `2-add_node.c`
Function that adds a new node at the beginning of a `list_t` list.
* Prototype: `list_t *add_node(list_t **head, const char *str);`
	* @head: `list_t` list to evaluate
	* @str: string to be duplicated to the new node
	* Return: address of the new element, or `NULL` if failed

#### `3-add_node_end.c`
Function that adds a new node at the end of a `list_t` list.
* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
	* @head: `list_t` list to evaluate
	* @str: string to be duplicated to the new node
	* Return: address of the new element, or `NULL` if failed

#### `4-free_list.c`
Function that frees a `list_t` list.
* Prototype: `void free_list(list_t *head);`
	* @head: `list_t` list to free
To check if memory has been free'd properly, use `valgrind ./file_name`.
	If memory was free'd you will this message in the HEAP SUMMARY: `All heap blocks were freed -- no leaks are possible`

#### `100-first.c`
Function that prints a specific string before the `main` function is executed.
* String to print: `You're beat! and yet, you must allow,\nI bore my house upon my back!\n`
