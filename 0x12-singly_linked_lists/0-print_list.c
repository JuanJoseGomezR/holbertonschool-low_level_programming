#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list
  * @h: list
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t count = 0; /*contador que retorna el # de nodes*/

	while (h != NULL) /*lista*/
	{
		if (h->str == NULL) /*str es el string*/
		{
			printf("[0] (nil)\n"); /*condicion que nos piden*/
			h = h->next; /*almaceno en la posicion [0] (head)*/
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str); /*len es el largo*/
			h = h->next;
			count++;
		}
	}
	return (count);
}
