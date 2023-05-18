#include "lists.h"

/**
* add_dnodeint - add a new node with value n to the dlistint list
* @head: pointer to first node of a dlistint list
* @n: n value of the new node to be created
* Return: number of nodes in the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
