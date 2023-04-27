#include "lists.h"
/**
  * list_len - returns the number of element in a linked list
  * @h: head of the linked list
  * Return: count
  */
size_t list_len(const list_h *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h->next;
	}
	return (count);
}
