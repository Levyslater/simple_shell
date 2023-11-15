#include "main.h"

/**
 * dup_str - duplicate string
 * @str: contain address to the new string
 * Return: address to the new string
*/

char *dup_str(const char *str)
{
	char *ptr;

	int len = _strlen(str) + 1;

	ptr = malloc(sizeof(char) * len);

	if (ptr)
	{
		cpy_str(ptr, str);
		return (ptr);
	}
	else
		perror("malloc");
	return (NULL);
}
