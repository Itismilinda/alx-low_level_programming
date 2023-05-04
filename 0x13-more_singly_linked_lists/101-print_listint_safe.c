#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - print a listint_t linked lists
 *
 * @h: pointer first node in the list
 *
 * Return: the Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *h)
{
	const listint_t *curr;
	size_t cnt;

	cnt = 0;
	curr = h;
	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		cnt += 1;

		if ((curr->next) >= curr)
		{
			printf("-> [%p] %d\n", (void *)curr->next,
					(curr->next)->n);
			return (cnt);
		}
		curr = curr->next;

	}

	if (h == NULL)
		return (0);

	return (cnt);
}
