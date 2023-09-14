#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the pointer to the head of the list
 * @n: integer
 * Return: the address of the new element or Null if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
