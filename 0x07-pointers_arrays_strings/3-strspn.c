#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: substring
 * @accept: segiment
 * Return: number of bytes fr0m the segiment s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int = 0;
int i;

while(*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
bytes++;
break;
}
else if ((accept[i + 1]) == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
