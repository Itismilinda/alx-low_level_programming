#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Returns  a
 *
 * @head: begining of new node
 *
 * Return: 1 on success, NULL if  failed
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *temp, *curr;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	temp = NULL;
	curr = NULL;
	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = curr;
	}

	*head = temp;

	return (*head);

}
