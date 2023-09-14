#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: head of the doubly linked list
 * Return: the number of elelments
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
