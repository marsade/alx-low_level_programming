#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		count = 1;
		new->n = n;
		if (current != NULL)
		{
			while (current->prev != NULL)
				current = current->prev;
		}
		while (current != NULL)
		{
			if (count == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					if (new != NULL)
					{
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
				break;
			}
			current = current->next;
			count++;
		}
	}
	return (new);
}
