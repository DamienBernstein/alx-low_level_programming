#include "main.h"

/**
 * rev_array-function that reverses the content of an array of integers.
 * @n: number of elements to swap.
 * @a: array of intergers.
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int *a[n];
int temp;

for (i = 0; i < n /2; i++)
{
temp = arr[i];
arr[i] = arr[n - i - 1];
arr[n - i - 1] = temp;
}
for (int i = 0; i < n; i++)
{
_putchar("%d; arr[i]");
}
}
