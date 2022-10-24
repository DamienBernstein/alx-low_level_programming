#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: header to pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t cont = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
	cont++;
}
return (cont);
}
}
