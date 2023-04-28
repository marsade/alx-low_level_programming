#include "lists.h"
/**
  * listint_len - returns the number of elements ina linked list
  * @h: pointer to the head of the list
  * Return: count
  */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
