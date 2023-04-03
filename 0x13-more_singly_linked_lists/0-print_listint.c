#include "lists.h"

/**
 * print_listint - print lists
 * @h: listint linked list
 *
 * Description: print the int n member of the each
 * element in the lists
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}

	return (elements);
}
