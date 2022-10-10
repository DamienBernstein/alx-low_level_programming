#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @str: string to be counted
 * Return: the length of the string
 */

int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}

/**
 * _strcopy - copy string pointed by src
 * @src: buffer storing string to copy
 * @dest: buffer storing the string
 * Return: copied string
 */

char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index]; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}

/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

doggo = malloc(sizeof(dog_t));
if (doggo == NULL)
return (NULL);

doggo->name = malloc(sizeof(char) * (strlen(name) + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}

doggo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (doggo == NULL)
{
free(doggo->name);
free(doggo);
return (NULL);
}

doggo->name = _strcopy(doggo->name, name);
doggo->age = age;
doggo->owner = _strcopy(doggo->owner, owner);

return (doggo);
}
