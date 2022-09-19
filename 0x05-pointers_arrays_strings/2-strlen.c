#include "main.h"
#include <stdio.h>

/**
 * strlen - function that returns the length of a string.
 * @s: input value to check.
 * return: int.
 */

int_strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i += 1;
}
return (i);
}
