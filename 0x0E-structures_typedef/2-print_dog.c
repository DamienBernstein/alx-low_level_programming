#include "dog.h"

/**
 * print_dog - prints a dog struct
 * @d: dog identification
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("nil\n");
else
printf("Name: %s\n", d->name);

if (d->age == NULL)
printf("nil\n");
else
printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("nil\n");
else
printf("Owner: %s\n", d->owner);

}
