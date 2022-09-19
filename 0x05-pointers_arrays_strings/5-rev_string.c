#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input value that checks
 * return: nothing
 */

void rev_string(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
}
