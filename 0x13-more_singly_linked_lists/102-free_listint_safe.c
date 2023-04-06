#include "lists.h"

/**
 * free_node - print
 * @h: first listint_t node
 * @lastnext: listint_t which is the last next
 * @nodes: pointer to int
 *
 * Description: print the nodes in the list and return
 * the number of nodes
 *
 * Return: void
 */
void free_node(listint_t *h, listint_t *lastnext, size_t *nodes)
{
	if (!h)
		return;

	if (h->next != lastnext && h->next != NULL)
		free_node(h->next, lastnext, nodes);

	free(h);
	*nodes = *nodes + 1;
}

/**
 * free_list - print
 * @h: first listint_t node
 * @lastnext: listint_t which is the last next
 *
 * Description: print the nodes in the list and return
 * the number of nodes
 *
 * Return: size_t
 */
size_t free_list(listint_t **h, listint_t *lastnext)
{
	size_t nodes = 0;

	free_node(*h, lastnext, &nodes);

	*h = NULL;

	return (nodes);
}

/**
 * free_listint_safe - free
 * @h: pointer first listint_t node
 *
 * Description: safely free a listint_t list
 *
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *lastnext = NULL;
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);

	slow = has_loop(h);

	lastnext = get_last_next(h, slow);

	return (free_list(h, lastnext));
}