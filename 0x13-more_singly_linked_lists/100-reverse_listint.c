#Include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *z;

	a = NULL;
	z = NULL;

	while (head != NULL)
	{
		z = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = z;
	}

	*head = a;
	return (*head);
}
