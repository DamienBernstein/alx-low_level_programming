#include "main.h"

/**
 * cap_string - function that capitalizes the
 * first character of words in a string.
 * @str: string to capitalize
 * Return: returns capitalized string.
 */

char *cap_string(char *str)
{
int index = 0;

while (str[++index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;

if (str[index - 1] ==  ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
str[index - 1] == ' ' ||
str[index] -= 32;
}    
else 
i++;
}    
}
return (str);
}
