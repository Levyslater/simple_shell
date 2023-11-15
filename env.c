#include "main.h"

/**
 * _path_value - handles path variable
 * @path: variable name
 * Return: value of path
*/

char *_path_value(const char *path)
{
	int i;
	int len = _strlen(path);

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], path, len) == 0 && environ[i][len] == '=')
		{
			len += 1;
			return (environ[i] + len);
		}
	}
	return (NULL);
}
