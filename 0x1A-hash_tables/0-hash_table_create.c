#include "hash_tables.h"
/**
  * hash_table_create - creates a new hash table
  * @size: size of the table
  * Return: point to the new hash || NULL if failed
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	array = malloc(sizeof(hash_node_t) * size);

	if (array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = array;
	return (new_table);
}
