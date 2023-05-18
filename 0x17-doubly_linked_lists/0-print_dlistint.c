#include "lists.h"

/**
* print_dlistint - print the n members of the dlistint
* @h: node of a dlistint link
* Return: number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}

	return (length);
}
