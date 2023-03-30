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
	char *str;

	tmp = malloc(sizeof(list_t));

	if (h == NULL || tmp == NULL)
		return (nodes);

	*tmp = *h;
	while (tmp != NULL)
	{
		_putchar('[');
		_putchar(tmp->len + '0');
		_putchar(']');
		_putchar(' ');
		str = tmp->str;
		if (str == NULL)
			str = "(nil)";
		i = 0;
		while (str[i] != '\0')
			_putchar(str[i++]);
		_putchar('\n');
		tmp = tmp->next;
		nodes++;
	}

	return (nodes);
}
