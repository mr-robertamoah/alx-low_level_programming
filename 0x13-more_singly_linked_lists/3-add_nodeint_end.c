#include "lists.h"

/**
 * add_nodeint_end - add
 * @head: pointer to first listint_t node
 * @n: int n of new struct
 *
 * Description: add element to the end of
 * the lists
 *
 * Return: size_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp;

	newnode = malloc(sizeof(listint_t));
	if (head == NULL || newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = newnode;
	}

	return (newnode);
}
