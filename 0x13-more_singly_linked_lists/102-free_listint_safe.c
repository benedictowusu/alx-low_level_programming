#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	while (*h != NULL)
	{
		listint_t *current = *h;

		*h = (*h)->next;
		free(current);
		count++;

		/* Check for a loop */
		if ((void *)current <= (void *)(*h))
		{
			*h = NULL;
			exit(98);
		}
	}
	return (count);
}
