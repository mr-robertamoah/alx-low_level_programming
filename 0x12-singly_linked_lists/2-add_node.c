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
 * add_node - add node
 * @head: pointer to struct list_s pointer
 * @str: string
 *
 * Description: add node to the beginning of list
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL || head == NULL)
		return (NULL);
	tmp = create_node(tmp, str);
/*printf("%s %d\n", tmp->str, tmp->len);*/
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
