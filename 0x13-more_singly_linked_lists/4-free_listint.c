#include "lists.h"
/**
  * free_listint - frees a listint_t list
  * @head: node
  */
void free_listint(listint_t *head)
{
	listint_t *new, *current;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
}
