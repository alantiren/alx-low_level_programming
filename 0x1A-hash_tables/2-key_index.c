#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table.
 * @key: The key to retrieve the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);
    unsigned long int index = hash % size;
    
    return index;
}
