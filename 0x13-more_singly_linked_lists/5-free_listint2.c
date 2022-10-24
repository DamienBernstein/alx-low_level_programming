#include "lists.h"

/**
 * free_listint2 - 
 * @h: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listin_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			ptr = *head;
			free(ptr);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
