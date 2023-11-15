#include "main.h"

/**
 * empty_input - checks if input is null
 * @command: user inputs
 * @argv: input vector
 * @count: line number
 * Return: status
*/

int empty_input(char **command, char **argv, int count)
{
	char *appended;
	int status = 0;

	if (_strcmp(command[0], "exit") == 0)
	{
		_free_memory(command);
		exit(0);
	}
	else if (_strcmp(command[0], "env") == 0)
	{
		print_env();
		_free_memory(command);
		return (status);
	}
	else
		appended = _input_path(command[0]);
	if (!appended)
	{
		print_error(argv[0], command[0], count);
		_free_memory(command);
		return (127);
	}
	status = _execute(appended, command);
	return (status);
}
