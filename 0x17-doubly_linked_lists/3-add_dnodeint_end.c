#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the end of the list
 * @head: pointer to the pointer to the head of the node
 * @n: integer
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
