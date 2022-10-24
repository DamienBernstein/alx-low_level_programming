#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the list
 * @index: index to be used
 * Return: node, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if ( i != index)
	{
	return (NULL);
	}
	return (temp);
}
