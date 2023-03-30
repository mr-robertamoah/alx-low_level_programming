#include "lists.h"

/**
 * print_list - print list
 * @h: struct list_s
 *
 * Description: print the elements of list_t and
 * return the number of nodes
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0, nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			i = 0;
			while (h->str[i] != '\0')
				_putchar(h->str[i++]);
			_putchar('\n');
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
