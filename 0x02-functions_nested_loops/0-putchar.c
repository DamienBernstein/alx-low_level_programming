#include "main.h"

/**
 * main-print _putchar,followed by a new line
 *
 * Return: int
 */

int main(void)
{
  int n = 0;
  char str_ptr[5] = "_putchar";

  while (n < 5)
    {
      char(str_ptr[n]);
      n += 1;
    }
  char('\n');
  return (0);
}
