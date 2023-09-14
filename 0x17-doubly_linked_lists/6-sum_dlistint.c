#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data
 * @head: pointer to the first node in the list
 * Return: sum of all data in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
