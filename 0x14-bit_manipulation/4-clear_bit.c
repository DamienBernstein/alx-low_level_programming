#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to be used
 * @index: position to be cleared
 * Return:  1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
  if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
    return (-1);

*n &= ~(1 << index);
  return (1);
}
