#include "lists.h"

/**
* add_dnodeint_end - add a new node with value n at the end of dlistint list
* @head: pointer to first node of a dlistint list
* @n: n value of the new node to be created
* Return: the address of the new node created
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;

	return (new);
}
