#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: a pointer to a string
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'; i++)
;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
