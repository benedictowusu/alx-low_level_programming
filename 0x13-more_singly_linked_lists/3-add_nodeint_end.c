#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *add;
	add = (listint_t *) malloc(sizeof(listint_t));

	if (add == NULL)
	{
		return (NULL);
	}
	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	else
	{
		listint_t *endof = *head;
		while (endof->next != NULL)
		{
			endof = endof->next;
		}
		endof->next = add;
	}
	return (add);
}
