#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	char *dup;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == null)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len])
		len++;

	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
		last = last->next;
		last->next = new_node;
	}
	return (*head);
}
