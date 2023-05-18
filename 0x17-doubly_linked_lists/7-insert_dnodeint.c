#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at a given position
* @h: pointer to first node of a dlistint list
* @idx: position of node in the list
* @n: data of the created node
* Return: the address of the created node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 0, length = 0;

	if (h == NULL || idx < i)
		return (NULL);

	tmp = *h;
	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}

	if (length < idx)
		return (NULL);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	if (length == idx)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;

	tmp = *h;
	while (tmp != NULL)
	{
		i++;
		if (i == idx)
		{
			new->next = tmp->next;
			new->prev = tmp;
			if (tmp->next)
				tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
