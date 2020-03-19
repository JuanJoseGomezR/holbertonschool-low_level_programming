#include "lists.h"
/**
 * add_node_end - add new node at the end
 * @head: ->next (first node)
 * @str: point to string
 * Return: & of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;
	list_t *ptr;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);
	end_node->len = _strlen(str);
	end_node->str = strdup(str);
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = end_node;
	}
	return (end_node);
}
/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
