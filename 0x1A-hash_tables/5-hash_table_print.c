#include "hash_tables.h"

/**
* print_node - print key value pair
* @node: hash_node_t pointer
* @printed: integer (0 or 1)
*/
void print_node(hash_node_t *node, int printed)
{
	if (printed)
		printf(", ");
	printf("'%s': '%s'", node->key, node->value);
}

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
	hash_node_t *head;
	int printed = 0;

	printf("{");

	if (ht != NULL && ht->array != NULL && ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				print_node(head, printed);
				printed = 1;
				head  = head->next;
			}
		}
	}

	printf("}\n");
}
