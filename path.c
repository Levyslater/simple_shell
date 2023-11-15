#include "main.h"

/**
 * _getpath - gets complete path
 * @command: use inputs
 * Return: full path
*/

char *_getpath(char *command)
{
	char *path_env, *appended, *dir, *cpy;
	/*input path handled*/
	path_env = _path_value("PATH"); /* mod funct name */
	cpy = dup_str(path_env);
	/*check if path exist*/
	if (!cpy)
		return (NULL);
	/*try handle the path*/
	dir = strtok(cpy, ":");

	while (dir)
	{
		appended = malloc(_strlen(dir) + _strlen(command) + 2);
		if (appended)
		{
			cpy_str(appended, dir);
			_strcat(appended, "/");
			_strcat(appended, command);
			if (access(appended, X_OK) == 0)
			{
				free(cpy);
				return (appended);
			}
			free(appended);
			appended = NULL;
			dir = strtok(NULL, ":");
		}
	}
	free(cpy);
	return (NULL);
}
