#include "hash_tables.h"

/**
* key_index - create index from key
* @key: string
* @size: size of the hash table array
*
* Description: hash the key and create index of same
*
* Return: unsigned long int
*/
unsigned long int key_index(
	const unsigned char *key, unsigned long int size
)
{
	return (hash_djb2(key) % size);
}
