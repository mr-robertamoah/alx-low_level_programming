#include "hash_tables.h"

/**
* hash_table_delete - delete hash table
* @ht: hash table
*
* Description: delete hash table and free up
* all memory
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head, *tmp;

	if (ht == NULL)
		return;
	if (ht->array == NULL || ht->size == 0)
	{
		free(ht);
		return;
	}

	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		head = ht->array[i];
		while (head)
		{
			tmp = head;
			head = head->next;
			tmp->next = NULL;
			free(tmp->key);
			if (tmp->value)
				free(tmp->value);
			free(tmp);
			tmp = NULL;
		}
		ht->array[i] = NULL;
	}

	free(ht->array);
	free(ht);
}
