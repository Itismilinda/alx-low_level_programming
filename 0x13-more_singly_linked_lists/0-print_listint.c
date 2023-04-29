#Include "lists.h"

/**
 * print_listint - It prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: Number of nodes
 */

Size_t print_listint(const listint_t *h)

{
	Size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
