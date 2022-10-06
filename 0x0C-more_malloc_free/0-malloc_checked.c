#include "main.h"

/**
 * malloc_cheked - function that allocates memory using malloc
 * @b: number of memory
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
 
