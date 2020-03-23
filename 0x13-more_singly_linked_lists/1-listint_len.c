#include "lists.h"
/**
  * listin_len - length of list
  * @h: cons var
  * Return: # elements | 0
  */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
