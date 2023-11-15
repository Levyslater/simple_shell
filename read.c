#include "main.h"

/**
 * read_inputs - reads user inputs from stdin
 *
 * Return: inputs
*/

char *read_inputs(void)
{
	ssize_t bits_read;
	char *buffer = NULL;
	size_t _size = 0;

	bits_read = getline(&buffer, &_size, stdin);
	if (bits_read == -1)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	buffer[_strcspn(buffer, "\n")] = '\0';
	return (buffer);
}
