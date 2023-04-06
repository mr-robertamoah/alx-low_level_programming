#include "lists.h"

/**
 * print_list - print
 * @h: first listint_t node
 * @lastnext: listint_t which is the last next
 *
 * Description: print the nodes in the list and return
 * the number of nodes
 *
 * Return: size_t
 */
size_t print_list(listint_t **h, listint_t *lastnext)
{
	size_t nodes = 0, count = 0;
	listint_t *head;

	head = *h;
	while (head != NULL)
	{
		nodes++;
		if (head == lastnext && count)
		{
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
		else
		{
			printf("[%p] %d\n", (void *) head, head->n);
		}
		if (head == lastnext && count == 0)
			count++;
		head = head->next;
	}

	return (nodes);
}

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

	head = *h;
	while (head != NULL && slow != NULL)
	{
		slow = slow->next;
		head = head->next;
		if (head == slow)
			return (head);
	}

	return (NULL);
}

/**
 * print_listint_safe - print
 * @head: first listint_t node
 *
 * Description: safely print a listint_t list
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slow, *lastnext = NULL;
	size_t nodes = 0;

	if (head == NULL)
		return (nodes);

	slow = has_loop((listint_t **)&head);

	lastnext = get_last_next((listint_t **)&head, slow);

	return (print_list((listint_t **)&head, lastnext));
}
