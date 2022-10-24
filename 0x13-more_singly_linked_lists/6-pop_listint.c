#include "list.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @h: head of list
 * Return: the removed nodes data.
 */

int pop_listint(listint_t **head)
{
	listint *node;
	int data;

	if (*head == NULL)
	return (0);

		node = *head;
		data = node->n;
		free(node);

	*head = (*head)->next;
	return (data);
}
