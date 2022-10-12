#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array to be targeted
 * @size: size of array
 * @action: pointer to the function to be used
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action == NULL || array == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}

}
