#include "lists.h"

/**
 * pop_listint - pop
 * @head: pointer to first listint_t node
 *
 * Description: remove head node of list
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n = 0;

	tmp = *head;
	if (tmp != NULL)
	{
		*head = tmp->next;
		tmp->next = NULL;
		n = tmp->n;
		free(tmp);
	}
	return (n);
}
