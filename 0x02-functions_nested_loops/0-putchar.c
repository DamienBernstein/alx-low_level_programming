#include "main.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_putchar[9] = "_putchar";

	while (n < 9)
	{
		_putchar(str_putchar[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
