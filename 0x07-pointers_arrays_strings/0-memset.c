#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: byte
 * @n: number of bytes
 *
 * Return: int
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int index = 0;
unsigned char *memory = s, value = b;

for (index = 0, index < n, index++)
memory[index] = value;
return(memory);
}
