#include "lists.h"

/**
 * has_loop - loop
 * @head: first listint_t node
 *
 * Description: check if linked list has loops
 *
 * Return: listint_t *
 */
listint_t *has_loop(listint_t **head)
{
	listint_t *slow, *fast;

	fast = slow = *head;
	while (slow && fast && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}

	return (NULL);
}

/**
 * get_last_next - get last next
 * @h: first listint_t node
 * @slow: listint_t which determines there is a loop
 *
 * Description: safely print a listint_t list
 *
 * Return: listint_t *
 */
listint_t *get_last_next(listint_t **h, listint_t *slow)
{
	listint_t *head;
	int count = 0;

	head = *h;
	while (head != NULL && slow != NULL)
	{
		count++;
		slow = slow->next;
		head = head->next;
		if (head == slow)
		{
			if (count == 1)
				return (head->next);
			return (head);
		}
	}

	return (NULL);
}

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
