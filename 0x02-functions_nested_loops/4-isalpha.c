#include "main.h"

/**
 * _isalpha - function that checks for alphabetial letters.
 * @c: The input character to check
 * Return: 0
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
