#include "lists.h"
/**
  * print_listint - prints all the elements of a linstint_t list
  * @h: pointer to head of list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
