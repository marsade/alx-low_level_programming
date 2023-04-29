#include "lists.h"
/**
  * pop_listint - deletes the head node
  * @head: head pointer
  * Return: n or 0 if empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (i);
}
