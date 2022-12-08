#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked dlistint_t list.
 * @h: head of pointer
 * Return: number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t cont = 0;

while (h != NULL)
{
h = h->next;
cont++;
}
return (cont);
}
