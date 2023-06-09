#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add/update the key/value to.
 * @key: The key to add/update.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;

    if (ht == NULL || key == NULL || value == NULL || *key == '\0')
        return 0;

    index = key_index((const unsigned char *)key, ht->size); // Get the index to store the key/value pair

    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0) // If the key already exists, update the value
        {
            free(temp->value); // Free the previous value
            temp->value = strdup(value); // Duplicate and set the new value
            return (1);
        }
        temp = temp->next;
    }

    new_node = malloc(sizeof(hash_node_t)); // Allocate memory for the new node
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key); // Duplicate and set the new key
    new_node->value = strdup(value); // Duplicate and set the new value
    new_node->next = ht->array[index]; // Add the new node at the beginning of the list
    ht->array[index] = new_node;

    return (1);
}
