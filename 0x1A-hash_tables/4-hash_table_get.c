#include "hash_tables.h"

/**
* hash_table_get - get value based on key
* @ht: hash_table_t pointer
* @key: string
*
* Description: using the key an index is gotten to find
* hash_node_t with the same key
*
* Return: char *
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
