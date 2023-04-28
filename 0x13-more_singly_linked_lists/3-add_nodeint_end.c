#include "lists.h"
/**
  * add_nodeint_end - adds a new node at the end of the list
  * @head: pointer to head of the list
  * @n: head->n
  * Return: the address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
