#include "lists.h"
/**
  * free_listint_safe - frees a listint_t linked list
  * @h: pointer to pointer to the first node
  * Return: the size of the freed list
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *ptr;

	if (*h == NULL || *h == NULL)
		return (0);
	current = *h;
	while (current != NULL)
	{
		count++;
		if (current < current->next)
		{
			ptr = current->next;
			free(current);
			current = ptr;
		}
		else
		{
			free(current);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (count);
}
