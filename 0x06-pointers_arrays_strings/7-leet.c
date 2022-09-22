#include "main.h"

/**
 * _leet - function that that encodes a string into 1337.
 * @s: pointer to char.
 * Return: char.
 */

char *leet(char *s)
{
int i = 0;
int j = 0;
char *l = "aAeEoOlLtT";
char *n = "4433001177";

while (*(s + i) != '\0')
{
while (*(j + l) != '\0')
{
if (*(s + i) == *(l + j))
*(s + i) = *(j + n);
j++;
}
j = 0;
i++;
}
return (s);
}
