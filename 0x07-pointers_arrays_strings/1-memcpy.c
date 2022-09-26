#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area that bytes are being copied into
 * @src: memory area that bytes are being copied from
 * @n: number of bytes
 * Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (; i < n; i++)
dest[i] = src[i];

return (dest);
}
