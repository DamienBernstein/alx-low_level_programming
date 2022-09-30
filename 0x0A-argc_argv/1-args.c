#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguements thats been passed through it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char __attribute__((__unused)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
