#include "lists.h"

/**
* delete_dnodeint_at_index - insert node at a given position
* @head: pointer to first node of a dlistint list
* @index: position of node in the list
* Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL || index < i)
		return (-1);

	tmp = *head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			if (index == 0)
			*head = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
