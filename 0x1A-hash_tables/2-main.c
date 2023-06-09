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
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "c";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "python";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "Bob";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "N";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "Asterix";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "Betty";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);
    s = "98";
    printf("%lu, %s\n", key_index((unsigned char *)s, hash_table_array_size), s);  
    return (EXIT_SUCCESS);
}
