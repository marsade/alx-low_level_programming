#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the node at an index
  * @head: pointer to pointer to the first node
  * @index: index of the node that should be deleted, index starts at 0
  * Return: 1 if succeeded and -1 if failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i, count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (index > count)
		return (-1);
	current = *head;
	for (i = 0; i < index - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
