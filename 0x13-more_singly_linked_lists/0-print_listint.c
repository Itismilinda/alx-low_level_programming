#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

Size_t print_listint(const listint_t *h)

{
       size_t nodes = 0;

         While (h)
        {
               printf("%d\n", h->n);
               num++
	       h = h->Next;
        }
        
               return (nodes);
}
