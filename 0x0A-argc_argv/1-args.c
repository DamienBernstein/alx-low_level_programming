#include <stdio.h>

/**
 * main - prints number of arguements
 * @argc: arguement count
 * @argv: arguement vector
 * Return: the number of arguments
 */

int main(int argc, char __attribute__((__unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
