# 0x19. C - Hash tables

## Purpose
To be able to explain the following:
* What is a hash function
* What makes a good hash function
* What is a collision and what are the main ways of dealing with them in the context of a hash table
* What are the advantages and drawybacks of using hash tables
* What are the most common use cases of hash tables

### Project Notes
#### Environment
These functions have been tested on Ubuntu 14.04.5 LTS.
Tests and development are done in VirtualBox on Ubuntu via Vagrant(1.8.1).
#### Compilation
All programs and functions are compiled with `gcc -Wall -Werror -Wextra -pedantic` version 4.8.4
#### Style
All code is written in Betty style. Information about this style can be found [here](https://github.com/holbertonschool/Betty/wiki).

Protoypes of all functions used are included in header file `hash_tables.h`.
Note: the following structures defined in `hash_tables.h` were provided by Holberton School.
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

 
## Files

[0-hash_table_create.c](0-hash_table_create.c)

Function that created a hash table
* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
	* @size: size of the array
	* Return: 
        * Success: pointer to the newly created hash table
        * Failure: `NULL`

[1-djb2.c](1-djb2.c)

Hash functions implementing the djb2 algorithm (from [http://www.cse.yorku.ca/~oz/hash.html](http://www.cse.yorku.ca/~oz/hash.html))
* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
    * @str: key to add to the hash table

[2-key_index.c](2-key_index.c)

Function that finds the index of a key.
* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
    * @key: key
    * @size: size of the hash table
    * Returns: index of the hash table at which the key/value pair should be stored

[3-hash_table_set.c](3-hash_table_set.c)

Function that adds an element to the hash table.
* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
    * @ht: hash table you want to add to/update
    * @key: key, cannot be an empty string
    * @value: value associated with the key, can be an empty string
    * Returns:
        * Success: `1`
        * Failure: `0`

[4-hash_table_get.c](4-hash_table_get.c)

Function that retrieves a value associated with a key.
* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
    * @ht: hash table to search
    * @key: key you are looking for
    * Returns:
        * Success: value associated with key
        * Failure: `NULL`

[5-hash_table_print.c](5-hash_table_print.c)

Function that prints the key/value pairs in a hash table in the order they appead in the hash table.
* Prototype: `void hash_table_print(const hash_table_t *ht);`
    * @ht: hash table to print

[6-hash_table_delete.c](6-hash_table_delete.c)

Function that deletes a hash table.
* Prototype: `void hash_table_delete(hash_table_t *ht);`
    * @ht: hash table to be deleted

## Authors
Kristen Loyd        [Github](https://github.com/KRLoyd) |  [LinkedIn](https://www.linkedin.com/in/kristen-loyd-34984a92)

## License
Public Domain, no copyright protection

