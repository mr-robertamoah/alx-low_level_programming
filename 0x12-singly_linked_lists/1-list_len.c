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
	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (h == NULL || tmp == NULL)
		return (nodes);

	*tmp = *h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}

	return (nodes);
}
