#include "lists.h"
/**
 * print_dlistint- prints all the elements of a dlistint_t list
 * @h: head of the doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
