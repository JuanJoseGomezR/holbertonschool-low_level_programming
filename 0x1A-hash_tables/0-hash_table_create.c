#include "hash_tables.h"

/**
 * hash_table_create - CREATES A HASH TABLE
 * *@size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* allocate space for table */
	new_ht = malloc(sizeof(hash_table_t));

	if (new_ht == NULL)
		return (NULL);

	/* allocate pointers to head nodes */
	new_ht->array = malloc(sizeof(hash_node_t *) * size);

	if (new_ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_ht->array[i] = NULL;
	}

	new_ht->size = size;

	return (new_ht);
}
