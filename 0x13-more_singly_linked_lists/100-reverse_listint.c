#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: pointer to first listint_t node
 *
 * Description: reverse a listint_t list
 *
 * Return: listint_t *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *previous_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	next_node = *head;
	while (next_node != NULL)
	{
		next_node = next_node->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;
	return (previous_node);
}
