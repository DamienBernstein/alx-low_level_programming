#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: inital number
 * @m: final number
 * return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int flipped = n ^ m;
  int count = 0;

  while (flipped)
  {
    if  (flipped & 1)
      count++;
    flipped >>= 1;
  }
  return (count);
}
  
