#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: header to pointer
 * Return: number of nodes
 */
 
 size_t print_listint(const listint_t *h)
 {
  const listint *ptr = h;
		size_t count = 0;

		while (ptr != NULL)
		{
				printf("%d\n", ptr->len);
			count += 1;
			ptr = ptr->next;
		}
		return (count);
	}
}
