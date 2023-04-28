#include "lists.h"
/**
  * free_listint2 - frees a listint_t list
  * @head: pointer to pointer of the first node
  */
void free_listint2(listint_t **head)
{
	listint_t *current, *new;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
	*head = NULL;
}
