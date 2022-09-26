#include "main.h"

/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
int i = 0;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
