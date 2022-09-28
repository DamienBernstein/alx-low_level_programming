#include "main.h"

/**
 * _sqrt_recursion - function the natural square root of a number
 * @n: number to be square rooted
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
else
return (1);
return (n * _sqrt_recursion(n - 1));
}
