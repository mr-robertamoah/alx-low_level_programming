#include "lists.h"

/**
 * add_nodeint - add
 * @head: pointer to first listint_t node
 * @n: int n of new struct
 *
 * Description: get the length of
 * element in the lists
 *
 * Return: size_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
