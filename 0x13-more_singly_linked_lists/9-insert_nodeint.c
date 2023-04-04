#include "lists.h"

/**
 * insert_nodeint_at_index - insert
 * @head: pointer to first listint_t node
 * @idx: index to insert at
 * @n: int n of the new node
 *
 * Description: remove head node of list
 *
 * Return: int
 */
listint_t *insert_nodeint_at_index(
	listint_t **head, unsigned int idx, int n
)
{
	listint_t *tmp, *newnode;
	unsigned int i = -1;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	while (i != idx)
	{
		i++;
		if (!tmp && i == 0 && i == idx)
		{
			*head = newnode;
			return (newnode);
		}
		if (tmp && i == 0 && i == idx)
		{
			newnode->next = tmp;
			*head = newnode;
			return (newnode);
		}
		if (i + 1 == idx)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		if (tmp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		tmp = tmp->next;
	}

	free(newnode);
	return (NULL);
}
