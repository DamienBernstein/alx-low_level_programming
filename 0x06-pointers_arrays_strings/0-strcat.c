#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: input value that checks
 * @src: input value that checks
 * Return: char
 */
 
char *_strcat(char *dest, char *src)
{
unsigned int i = 0;
unsigned int j = 0;
  
while (*(dest + i) != '\0') 
i++;
while (*(src + j) != '\0')
{
*(dest + i) = *(src + j);
i++;
j++;
}
return (dest);
}
