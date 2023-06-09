#include "hash_tables.h"

/**
* hash_table_create - create a hash table with a given size
* @size: the size of the created hash table
*
* Description: this creates a hash table in memory with a
* given size and then sets the size as well as allocate memory
* for the array
*
* Return: hash_table *
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
