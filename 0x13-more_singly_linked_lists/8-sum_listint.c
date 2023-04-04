#include "lists.h"

/**
 * sum_listint - sum
 * @head: first listint_t node
 *
 * Description: sum the int n of the list
 *
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
