#include "main.h"
#include <stdio.h>

/**
 * swap - function that swaps the values of two integers
 * @a, b: input value to check
 * return: nothing
 */

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
