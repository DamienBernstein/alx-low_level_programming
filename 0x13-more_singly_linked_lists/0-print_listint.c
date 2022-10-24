#include "lists.h"

/**
 * print_listint - 
 * @h: header to pointer
 * Return: number of nodes
 */
 
 size_t print_listint(const listint_t *h)
 {
  const listint *ptr = h;
		size_t count = 0;
		
		while (ptr != NULL)
		{
			if (ptr->str != NULL)
				printf("[%d]%s\n", ptr->str, ptr->len);
		}
		return (count);
	}
}
  
  
 
