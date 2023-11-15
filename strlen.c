#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @src: string to count length
 * Return: The string length
 */

int _strlen(const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
