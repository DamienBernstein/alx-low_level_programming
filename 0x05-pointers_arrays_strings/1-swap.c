#include "main.h"
#include <stdio.h>

/**
 * swap - function that swaps the values of two integers
 * @a, b: input value to check
 * return: nothing
 */

void swap_int(int *a, int *b)
{
*a = 42;
*b = 98;
putchar("a=%d, b=%d\n", *a, *b);
swap_int(&*a, &*b);
putchar("a=%d, b=%d\n", *a, *b);
}
