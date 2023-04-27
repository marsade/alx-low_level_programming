#include "lists.h"
/**
  * add_node_end - adds a new node to the end of the list
  * @head: head of the list
  * @str: head->str
  * Return: address of the new element or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *new_str;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = new_str;
	while (new_str[i] != '\0')
		i++;
	new->len = i;
	new->next = NULL;
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
