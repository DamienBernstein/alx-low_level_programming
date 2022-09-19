#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: input value to check
 * Return: nothing 
 */

void _puts(char *str)
{
int i;

while(str[i] != '\0')
{
putchar(str[i]);
i += 1;
}
putchar('\n');
}
