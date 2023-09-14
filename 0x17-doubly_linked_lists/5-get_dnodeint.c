#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: the nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
