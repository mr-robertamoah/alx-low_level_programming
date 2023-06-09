#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "1");
    hash_table_set(ht, "mentioner", "1");
    hash_table_set(ht, "heliotropes ", "1");
    hash_table_set(ht, "neurospora", "1");
    hash_table_set(ht, "depravement ", "1");
    hash_table_set(ht, "serafins", "1");
    hash_table_set(ht, "stylist ", "1");
    hash_table_set(ht, "subgenera", "1");
    hash_table_set(ht, "joyful", "1");
    hash_table_set(ht, "synaphea", "1");
    return (EXIT_SUCCESS);
}
