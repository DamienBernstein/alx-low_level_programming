#include "main.h"
#include <stdio.h>

/**
 * swap - function that swaps the values of two integers
 * return: int.
 */

void swap_int(int *a, int *b)
{
int a;
int b;

a = 42;
b = 98;
_putchar("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
_putchar("a=%d, b=%d\n", a, b);
return (0);
}