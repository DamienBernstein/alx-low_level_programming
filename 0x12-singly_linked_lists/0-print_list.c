#include "main.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
const list_t *ptr = h;
size_t count = 0;

while (ptr != NULL)
{
if (ptr->str != NULL)
printf("[%d] %s\n", ptr->len, ptr->str);
else 
printf("[0] (nil)\n");
count += 1;
ptr = ptr->next;
}
return (count);
}
