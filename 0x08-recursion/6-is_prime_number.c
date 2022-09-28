#include "main.h"

/**
 * is _prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: number
 * Return: int
 */

int is_prime_number(int n)
{
if (n < 0)
return (0);
if (n == 1)
return (1);
return (n * is_prime_number(n  - 1));
}
