#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning of a listint_t
 * @head: pointer to head of the list
 * @n: head->n
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
