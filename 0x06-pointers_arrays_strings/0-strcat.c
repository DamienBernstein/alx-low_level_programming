#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: input value that checks
 * @src: input value that checks
 * Return: int 
 */
 
 char *_strcat(char *dest, char *src)
 {
 char s1[100] = "Hello!";
 char s2[] = "World";
 int length, i;
 
 length  = 0;
 while ( s1[length] != '\0', i++; ++length) {
 s1[length] = s2[i];
 }

s1[length] = '\0';
_putchar("After concatenates: ");
_putchar("s1");
_putchar('\n');
return (0);
