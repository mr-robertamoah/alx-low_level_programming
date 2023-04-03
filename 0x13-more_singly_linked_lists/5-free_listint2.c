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

/**
 * free_listint2 - free
 * @head: pointer to first listint_t node
 *
 * Description: free nodes of the list and set
 * first node to NULL
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	free_listint(*head);

	*head = NULL;
}
