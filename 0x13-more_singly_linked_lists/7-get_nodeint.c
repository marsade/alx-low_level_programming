#include "lists.h"
/**
  * get_nodeint_at_index - a function that returns the nth node
  * @head: pointer to pointer to first node
  * @index: nth node position
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index && temp != NULL)
			temp = head;
		count++;
		head = head->next;
		if (head == NULL && count != index + 1)
			return (NULL);
	}
	return (temp);
}
