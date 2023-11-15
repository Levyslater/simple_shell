#include "main.h"

/**
 * token_generator - function generates token
 * @arguments: user commands
 *
 * Return: tokens
*/

char **token_generator(char *arguments)
{
	int i;
	char **buffer = NULL;
	char *token = NULL;

	i = argument_size(arguments);

	if (!i)
		return (NULL);
	buffer = malloc(sizeof(char *) * (i + 1));
	token = strtok(arguments, DELIM);
	i = 0;

	while (token)
	{
		buffer[i] = dup_str(token);
		token = strtok(NULL, DELIM);
		i++;
	}
	buffer[i] = NULL;
	free(arguments);
	arguments = NULL;
	return (buffer);
}
