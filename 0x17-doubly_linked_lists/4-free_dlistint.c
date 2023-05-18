#include "lists.h"

/**
* free_dlistint - free the nodes in a dlistint list
* @head: first node of a dlistint link
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_dlistint(head->next);
	}

	free(head);
}
