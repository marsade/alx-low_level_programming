#include "lists.h"
/**
  * add_node - adds a new node at the beginnint of a list_t
  * @head: new node to be added
  * @str: head->str
  * Return: the address of the new element or NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;
	char *new_str;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new_str = strdup(str);
	new->str = new_str;
	while (new_str[i] != '\0')
		i++;
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}
