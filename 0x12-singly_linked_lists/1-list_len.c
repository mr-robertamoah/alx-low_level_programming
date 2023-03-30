#include "lists.h"

/**
 * list_len - get struct length
 * @h: struct list_s
 *
 * Description: print the elements of list_t and
 * return the number of nodes
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
