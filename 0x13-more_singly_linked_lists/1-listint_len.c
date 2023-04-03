#include "lists.h"

/**
 * listint_len - get length
 * @h: listint linked list
 *
 * Description: get the length of
 * element in the lists
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
