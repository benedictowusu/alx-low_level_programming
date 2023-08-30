#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	listint_t *current = *head;
	unsigned int add = 0;

	while (current != NULL && add < idx - 1)
	{
		current = current->next;
		add++;
	}

	if (current == NULL || count < idx - 1)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
