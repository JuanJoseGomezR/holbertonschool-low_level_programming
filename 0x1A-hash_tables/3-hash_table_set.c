#include "hash_tables.h"
/**
 * hash_table_set - adds a new element to the ht
 * @ht: hash table we'll modify
 * @key: the key to dup
 * @value: the value to dup
 * Return: 1 if suceeded || 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	unsigned long int size;
	hash_node_t *new = NULL;

	if (ht  == NULL || key == NULL || value == NULL)
		return (0);

	/* use key_index and determine size of table */
	size = ht->size;
	idx = key_index((const unsigned char *)key, size);

	/* allocate space for new node */
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0); /* return 0 on failure */

	/* assign data for new node */
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1); /* return 1 on success */
}
