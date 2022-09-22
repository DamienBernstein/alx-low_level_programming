#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @src: string that appends to dest.
 * @dest: input value that is to be copied of the destination.
 * @n: number of bytes to allocate.
 * Return: return. 
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
