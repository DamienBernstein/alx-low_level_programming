#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file to read
 * @letters: letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;
	if  (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(buffer, r, STDOUT_FILENO);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffe);
	close(o);

	return (w);
}
