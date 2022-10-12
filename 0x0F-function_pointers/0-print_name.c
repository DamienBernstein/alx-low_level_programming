#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name that will be printed
 * @f: function which prints name
 *  Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
