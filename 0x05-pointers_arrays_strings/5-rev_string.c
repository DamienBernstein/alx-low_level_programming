#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input value that checks
 * return: nothing
 */

void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}
