#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer of an array int.
 * @n: The number of elements to swap.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int j = 0;
int *str, *array;
int aux = 0;

str = a;
array = a;
n -= 1;
while (i < n)
i += 1;
while (j <= i)
{
aux = *(str + j);
*(str + j) = *(array + i);
*(array + i) = aux;
j++;
i--;
}
}
