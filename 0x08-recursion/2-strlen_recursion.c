#include "main.h"

/**
 * strlen_recursion.c - function that prints the
 * length of the string
 * @s: string 
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
