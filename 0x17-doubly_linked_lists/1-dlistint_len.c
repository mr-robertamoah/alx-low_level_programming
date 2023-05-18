#include "lists.h"

/**
* dlistint_len - get the number of members of the dlistint
* @h: node of a dlistint link
* Return: number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
