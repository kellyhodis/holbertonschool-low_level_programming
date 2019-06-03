This collection of functions related to hash tables in C is compiled on Ubuntu 14.04 LTS, with `gcc 4.8.4` using the flags ` -Wall -Werror -Wextra and -pedantic`. No global variables, using the C standard library. The prototypes are kept in `hash_tables.h`. 

To run these functions:

`gcc -Wall -Werror -Wextra and -pedantic *.c -o *`

A collection of `main.c` files is in the `main` folder.



Structures used for hash tables:

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
```

```
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




