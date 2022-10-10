#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog identification
 * Return: nothing
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d);
free(d->owner);
}
