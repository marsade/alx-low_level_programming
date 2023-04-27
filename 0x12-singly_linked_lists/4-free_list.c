#include "lists.h"
/**
  * free_list - frees the list
  * @head: list to be freed
  */
void free_list(list_t *head)
{
	list_t *current, *new;

	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current->str);
		free(current);
		current = new;
	}
}
