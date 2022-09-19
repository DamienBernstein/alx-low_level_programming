#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers, 
 * followed by a new line.
 * you can use printf
 * @a: input value that checks
 * @n: input value that checks
 * return: nothing
 */

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
