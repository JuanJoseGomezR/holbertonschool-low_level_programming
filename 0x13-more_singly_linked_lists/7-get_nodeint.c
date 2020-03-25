#include "lists.h"
/**
  * get_nodeint_at_index - return index
  * @head: first node
  * @index: index of the node
  * Return: index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nd_index = head;

	if (head == NULL)
		return (0);

	for (i = 0; i < index;)
	{
		if (head == NULL)
			return (NULL);
		nd_index = head->next;
		head = nd_index;
		++i;
	}
	return (nd_index);
}
