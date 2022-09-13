#include "main.h"

/**
 * main-print _putchar,followed by a new line
 *
 * Return: int
 */

int main(void)
{
  int n = 0;
  char str_ptr[9] = "_putchar";

  while (n < 9)
    {
      putchar(str_ptr[n]);
      n += 1;
    }
  putchar('\n');
  return (0);
}
