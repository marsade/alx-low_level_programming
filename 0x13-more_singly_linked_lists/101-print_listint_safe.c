#include "lists.h"
/**
  * print_listint_safe - prints a listint_t linked list
  * @head: pointer to the head of the list
  * Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a, *b;
	size_t count = 0;

	a = head;
	b = head;
	while (a && b && b->next)
	{
		printf("[%p] %d\n", (void *)a, a->n);
		count++;
		a = a->next;
		b = b->next->next;

		if (a == b)
		{
			printf("[%p] %d\n", (void *)a, a->n);
			count++;
			break;
		}
	}
	if (!a || !b || !b->next)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	return (count);
}
