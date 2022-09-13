#include "main.h"

/**
 * print_sign -> prints sign based on condition
 * @n: argument passed
 * Return: 1, 0, -1
 */

int main(void)
{
if (n > 0)
{
_putchar('+');  
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
