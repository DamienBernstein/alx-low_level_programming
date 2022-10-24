#include "lists_h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @h: header to pointer
 * @n: new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint *new_node;
	listint *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
	
