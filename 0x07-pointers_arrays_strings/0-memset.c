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
unsigned int n = 0;
while (n < b)
{
if (n % 10)
{
_putchar(" ");
}
if (!(n % 10) && n)
{
putchar("\n");
}
_putchar("0x%02x", b[*s]);
}
_putchar("\n");
}
return (*s);
}
