#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the existing list.
 * @n: the integer to be added to the existing list.
 * Return: address of the new element, or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
    listint_t *new_node, *current;

    /* create a new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    /* if the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* traverse the list to find the last node */
    current = *head;
    while (current->next != NULL)
        current = current->next;

    /* add the new node at the end */
    current->next = new node;

    return (new node);
}
