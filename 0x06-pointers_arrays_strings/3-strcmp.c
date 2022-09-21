#include "main.h"

/**
 * _strcmp-function that compares two strings.
 * @dest: input value that will be compared.
 * @src: input value that will be compared.
 * return: int.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int aux;
while (*(s1 + 1) != '\0')
{
if (*(s1 + 1) > *(s2 + 1))
aux = *(s1 + 1) - *(s2 + 1);
return(aux);
}
else if *(s1 + 1) < *(s2 + 1)
aux = *(s1 + 1) - *(s2 + 1);
return(aux);
}
i += 1;
}
return (0);
}
