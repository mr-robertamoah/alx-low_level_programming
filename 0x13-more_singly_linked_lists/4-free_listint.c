#include "lists.h"

/**
 * free_listint - free
 * @head: first listint_t node
 *
 * Description: free nodes of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_listint(head->next);
	}

	free(head);
}
