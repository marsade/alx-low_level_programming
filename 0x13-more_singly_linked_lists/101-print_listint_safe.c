#include "lists.h"
/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer to the head of the list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *temp;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
