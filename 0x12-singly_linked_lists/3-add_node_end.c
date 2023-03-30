#include "lists.h"
#include <string.h>

/**
 * create_node - create node
 * @tmp: pointer to struct list_s
 * @str: string
 *
 * Description: create node to the beginning of list
 *
 * Return: list_t
 */
list_t *create_node(list_t *tmp, const char *str)
{
	unsigned int len = 0;

	tmp->str = strdup(str);
	while (str && str[len] != '\0')
		len++;
	tmp->len = len;

	return (tmp);
}

/**
 * add_node_end - add node
 * @head: pointer to struct list_s pointer
 * @str: string
 *
 * Description: add node to the end of list
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *nextnode;

	tmp = malloc(sizeof(list_t *));

	if (tmp == NULL)
		return (NULL);
	tmp = create_node(tmp, str);

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	nextnode = *head;
	while (nextnode->next != NULL)
		nextnode = nextnode->next;

	nextnode->next = tmp;
	return (tmp);
}
