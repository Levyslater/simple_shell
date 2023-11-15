#include "main.h"

/**
 * _input_path - fuction that execute inputs
 * @input: array of inputs
 * Return: path address on success, null otherwise
*/

char *_input_path(char *input)
{
	int i;
	char *appended_input;

	for (i = 0; input[i]; i++)
	{
		if (input[i] == '/')
		{
			if (access(input, X_OK) == 0)
				return (dup_str(input));
			return (NULL);
		}
	}
	appended_input = _getpath(input);
	return (appended_input);
}
