#include "lists.h"
/**
  * print_list - prints all the elements og a list_t list
  * @h : pointer to the linked list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
