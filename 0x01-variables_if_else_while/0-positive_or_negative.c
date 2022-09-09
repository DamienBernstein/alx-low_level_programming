#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - assign a random number to the variable (n) each time it it executed
 * if more than 0 (positive)
 * if 0 (zero)
 * if number less than zero(negative), followed by a new line.
 * Return:0
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
    
