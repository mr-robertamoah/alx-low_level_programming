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
	list_t *tmp;

	if (h == NULL)
		return (nodes);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (nodes);

	*tmp = *h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			tmp->str = "(nil)";
			tmp->len = 0;
		}
		_putchar('[');
		_putchar(tmp->len + '0');
		_putchar(']');
		_putchar(' ');
		i = 0;
		while (tmp->str[i] != '\0')
			_putchar(tmp->str[i++]);
		_putchar('\n');
		tmp = tmp->next;
		nodes++;
	}
	free(tmp);
	return (nodes);
}
