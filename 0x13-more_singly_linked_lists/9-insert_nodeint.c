#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a new position
  * @head: pointer to pointer to first node
  * @idx: index of the list where the new node should be added
  * @n: head->n
  * Return: the address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i = 0, count = 0;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	current = *head;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (idx > count)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	while (i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
