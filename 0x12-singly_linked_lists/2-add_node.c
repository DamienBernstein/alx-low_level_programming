#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: input header pointer
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *new_node;

new = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

if (strdup == NULL)
{
free(new_node);
return (NULL);
}
for (len = 0; str[len];)
len++;

new_node->str = strdup;
new_node->len = len;
new_node->next = *head;

*head = new_node;

return (new_node);

}
