#include "lists.h"
#include <string.h>

/**
 * free_next_node - free next node
 * @tmp: pointer to struct list_s
 *
 * Description: free next node
 *
 * Return: void
 */
void free_next_node(list_t *tmp)
{
	if (tmp->next != NULL)
	{
		free_next_node(tmp->next);
	}

	free(tmp);
}

/**
 * free_list - free node
 * @head: pointer to struct list_s pointer
 *
 * Description: free node from the beginning to end of list
 *
 * Return: list_t
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_next_node(head);
}
