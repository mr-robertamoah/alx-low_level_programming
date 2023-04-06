#include "lists.h"

/**
 * find_listint_loop - loop
 * @head: first listint_t node
 *
 * Description: get the node where the loop starts from
 *
 * Return: listint_t *
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
		return (NULL);

	return (get_last_next(
			(listint_t **)&head,
			has_loop((listint_t **)&head))
	);
}
