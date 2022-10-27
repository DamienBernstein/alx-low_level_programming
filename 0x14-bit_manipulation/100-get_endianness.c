#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
  unsigned int test = 1;
  char *endian = (char *)&test;

  if (*endian)
		return (1);
	return (0);
}
