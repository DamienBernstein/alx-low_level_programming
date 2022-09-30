#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: arguement count
 * @argv: arguement vector
 * Return: all arguementsm recevied
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);

return(0);
}
