#include "lists.h"

/**
* sum_dlistint - get the sum of the data(n) of all nodes in the list
* @head: first node of dlistint list
* Return: sum of member n
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
