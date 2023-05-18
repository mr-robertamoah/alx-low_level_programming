#include "lists.h"

/**
* get_dnodeint_at_index - get the node at an index
* @head: first node of a dlistint list
* @index: position of node in the list
* Return: the address of the found node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || index < i)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);

		i++;
		tmp = tmp->next;
	}

	return (NULL);
}
