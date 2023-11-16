#include "main.h"

/**
 * _execute - execute commands
 * @appended: full command path
 * @command: user input
 * Return: child exit status
*/

int _execute(char *appended, char **command)
{
	pid_t pid;
	int status;

	pid = fork();

	if (pid == 0)
	{
		if (execve(appended, command, environ) == -1) /*use extern*/
		{
			
			_free_memory(command);
			perror("execve");
		}
	}
	else if (pid == -1)
	{
		_free_memory(command);
		perror("fork");
		free(appended);
	}
	else
	{
		waitpid(pid, &status, 0);
		_free_memory(command);
		free(appended);
	}
	return (WEXITSTATUS(status));
}
