#include "hash_tables.h"

/**
  * hash_table_get - get the value of the idx
  * @ht: hash table we're gonna use
  * @key: key we want to get
  * Return: key value || NULL {if failed
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned long index;
	int i;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* find the index of the value */
	index = key_index((const unsigned char *)key, ht->size);

	aux = ht->array[index];

	if (aux == NULL)
		return (NULL);

	/* collisions*/
	for (i = strcmp(key, aux->key); aux != NULL; )
	{
		if (i == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
