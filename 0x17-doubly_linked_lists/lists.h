#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;


/* Function Prototypes */

/* Function to print the elements of a doubly linked list */
void print_dlistint(const dlistint_t *head);

/* Function to add a new node at the beginning of a doubly linked list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Function to add a new node at the end of a doubly linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Function to free a doubly linked list */
void free_dlistint(dlistint_t *head);

/* Function to return the number of elements in a doubly linked list */
size_t dlistint_len(const dlistint_t *h);

/* Function to get the nth node of a doubly linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Function to compute the sum of all the data (n) in a doubly linked list */
int sum_dlistint(dlistint_t *head);

/* Function to insert a new node at a given position in a doubly linked list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Function to delete a node at a given index in a doubly linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
