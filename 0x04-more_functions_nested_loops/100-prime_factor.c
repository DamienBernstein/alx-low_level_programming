#include <stdio.h>

/**
 * prime_factor - program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 * The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
 * Return: 0 success
 */

int main(void)
{
long num = 612852475143;
long divisor = 2;
long larg_prim = 0;

while (num != 1)
{
if (num % divisor == 0)
{
num = num / divisor;
larg_prim = divisor;
}
divisor += 1;
}
printf("%ld\n", larg_prim);
return (0);
}
