#include "hash_tables.h"

/**
* hash_table_print - print hash table
* @ht: hash table
*
* Description: print the key value pairs of nodes
* in the hash table
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *tmp;
	int printed = 0;

	printf("{");

	if (ht != NULL && ht->array != NULL && ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			if (head)
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				printed = 1;

				tmp = head->next;
				while (tmp)
				{
					printf(", ");
					printf("'%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
				}
			}
		}
	}

	printf("}\n");
}
