#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
