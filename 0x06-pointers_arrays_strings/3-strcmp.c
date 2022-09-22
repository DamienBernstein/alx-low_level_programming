#include "main.h"

/**
 * _strcmp-function that compares two strings.
 *
 * @s1: pointer to char source 1
 * @s2: pointer to char source 2
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int strncmp;
while (*(s1 + 1) != '\0')
{
if (*(s1 + 1) > *(s2 + 1))
strncmp = *(s1 + 1) - *(s2 + 1);
return (strncmp);
}
else if *(s1 + 1) < *(s2 + 1)
strcnmp = *(s1 + 1) - *(s2 + 1);
return (strncmp);
}
i += 1;
}
return (0);
}
