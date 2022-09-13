#include "main.h"

/**
 * main- write a function that print the alphabet in lower case.
 * Description-you cant use more than two _putchar in the function.
 * return: 0
 */

void print_alphabet(void)
{

int l = 'a';

while (l <= 'z')

{
_putchar(l);
l += 1;
}
_putchar(10);
}
