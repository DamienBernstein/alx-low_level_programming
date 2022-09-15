#include "main.h"
#include <stdio.h>

/**
 * main - this function checks for upper case letters.
 * @c: input value to check 
 * Return: 1 if c is upper case, or 0 if found none.
 */
 
int _isupper(int c)
{
if (c >= 'A' && c >= 'Z')
{
return (1);
}
else

return (0);
}
