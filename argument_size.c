#include "main.h"

/**
 * argument_size - function check command size
 * @arguments: inputs
 * Return: length i
*/

int argument_size(char *arguments)
{
	int i = 0;
	char *token = NULL;
	char *duplicate = NULL;
	/*char **buffer = NULL; */
	if (!arguments) /*no arguments are recieved*/
		return (0);
	duplicate = dup_str(arguments);/*duplicate will be DMA*/
	token = strtok(duplicate, DELIM); /*strtok would mess the arguments string*/

	if (token == NULL)
	{
		free(duplicate);
		duplicate = NULL;
		free(arguments);
		arguments = NULL;
		return (0);
	}
	while (token)
	{
		i++;
		token = strtok(NULL, DELIM);
	}
	free(duplicate);
	duplicate = NULL;
	return (i);
}
