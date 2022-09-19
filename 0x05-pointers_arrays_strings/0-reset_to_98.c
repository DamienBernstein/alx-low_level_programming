#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - function that takes a pointer to an int as parameter and updates the value it points to 98
 * @n: input value to check.
 * return: int.
 */

void reset_to_98(int *n)
{
int *n;

*n = 8;
_putchar("*n=%d\n", *n);
reset_to_98(&*n);
_putchar("*n=%d\n", *n);
return (0);
}
