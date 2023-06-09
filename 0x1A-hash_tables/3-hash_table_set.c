#include "hash_tables.h"

/**
* hash_node_create - create a new hash_node_t node
* @node: pointer to hash_node_t
* @key: string
* @value: string
*
* Description: create a new hash_node_t and set key
* and value
*
* Return: int
*/
int hash_node_create(
	hash_node_t **node, const char *key, const char *value
)
{
	(*node) = malloc(sizeof(hash_node_t)); /* create the hash_node */
	if (node == NULL)
		return (0);

	(*node)->key = strdup(key);
	(*node)->value = NULL;
	(*node)->next = NULL;
	if (value)
	{
		(*node)->value = malloc(sizeof(char) * (strlen(value) + 1));
		strcpy((*node)->value, value);
	}

	return (1);
}

/**
* handle_collision - handle collision during set of node
* @head: head of linked list at index
* @node: pointer to hash_node_t
* @key: string
* @value: string
*
* Description: handle collision by updating existing key or
* inserting node at the beginning of linked list
*
* Return: int
*/
int handle_collision(
	hash_node_t **head, hash_node_t **node,
	const char *key, const char *value
)
{
	hash_node_t *tmp = *head;
	int result;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);

			if (value)
			{
				tmp->value = malloc(sizeof(char) * (strlen(value) + 1));
				strcpy(tmp->value, value);
			}
			else
				tmp->value = (char *) value;

			return (1);
		}

		tmp = tmp->next;
	}

	result = hash_node_create(node, key, value);
	if (!result)
		return (0);

	(*node)->next = *head;

	return (1);
}

/**
* hash_table_set - set the key-value pair in the hash table
* @ht: hash_table_t
* @key: string
* @value: string
*
* Description: create hash_node_t node from key and value and add
* node to the hash table based on index
*
* Return: int
*/
int hash_table_set(
	hash_table_t *ht, const char *key, const char *value
)
{
	hash_node_t *head = NULL, *node = NULL;
	unsigned long int index;
	int result = 1;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	/* get index based on key */
	index = key_index((const unsigned char *) key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		result = hash_node_create(
			&node, key, value);
	else
		result = handle_collision(
			&head, &node, key, value);

	if (!result)
		return (0);

	ht->array[index] = node;

	return (1);
}
