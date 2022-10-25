#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: head of list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *rmovenode;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
		  if (temp == NULL)
				return (-1);
			i++;
		}
		rmovenode = temp;
		rmovenode = rmovenode->next;
		temp->next = rmovenode->next;
		free(rmovenode);
	}
	return (1);
}
