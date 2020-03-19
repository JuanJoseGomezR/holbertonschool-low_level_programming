#include "lists.h"
#include <stdio.h>
#include <string.h> /* use strlen & strdup*/
#include <stdlib.h> /* use NULL*/
/**
  * add_node - adds a new node at the beginning
  * @head: first node
  * @str: string
  * Return: & of the new node || NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;

	nw_node = malloc(sizeof(list_t)); /* Reserve memory*/

	if (nw_node == NULL) /* In case of error = NULL*/
		return (NULL);
	nw_node->len = strlen(str); /*->len stores the length of str*/
	nw_node->str = strdup(str); /*->str stores a str duplicate*/
	nw_node->next = *head; /*->next is the head, first node*/
	*head = nw_node; /*we have to print head from the main.c*/
	return (nw_node); /* Address of the new element*/
}
