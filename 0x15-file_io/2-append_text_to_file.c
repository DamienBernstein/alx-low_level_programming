#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: A pointer to the name of the file.
 *@text_content: The string to add to the end of the file.
 *
 *Return: If the function fails or filename is NULL -1
 *	if the file does not exist the user lacks write permissions -1
 *	otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
