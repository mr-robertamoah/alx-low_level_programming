#include "lists.h"

listint_t *has_loops(listint_t **head, tracker_t *track);
listint_t *get_last_nexts(listint_t *head, listint_t *slow);

/**
 * has_loops - loop
 * @head: first listint_t node
 * @track: struct tracker
 *
 * Description: check if linked list has loops
 *
 * Return: listint_t *
 */
listint_t *has_loops(listint_t **head, tracker_t *track)
{
	track->fast = track->slow = *head;
	while (track->slow && track->fast && track->fast->next != NULL)
	{
		track->slow = track->slow->next;
		track->fast = track->fast->next->next;
		if (track->slow == track->fast)
			return (track->slow);
	}

	return (NULL);
}

/**
 * get_last_nexts - get last next
 * @head: first listint_t node
 * @slow: listint_t which determines there is a loop
 *
 * Description: safely print a listint_t list
 *
 * Return: listint_t *
 */
listint_t *get_last_nexts(listint_t *head, listint_t *slow)
{
	int count = 0;

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
	tracker_t track = {NULL, NULL};

	if (head == NULL)
		return (NULL);

/*	track->slow = NULL;*/
/*	track->fast = NULL;*/
	return (get_last_nexts(
			head,
			has_loops(&head, &track))
	);
}
