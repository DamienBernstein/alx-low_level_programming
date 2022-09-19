#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int n, j, l, f;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (f != 2772)
	{
		n = l = f = 0;
		while ((2772 - 122) > f)
		{
			j = rand() % 62;
			p[n] = c[j];
			f += c[j];
			n++;
		}
		while (c[l])
		{
			if (c[l] == (2772 - f))
			{
				p[n] = c[l];
				f += c[l];
				n++;
				break;
			}
			l++;
		}
	}
	p[n] = '\0';
	printf("%f", p);
	return (0);
}
