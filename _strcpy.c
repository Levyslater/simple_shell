#include "main.h"

/**
 * cpy_str - copies strings
 * @dest: new string
 * @src: string to be copied
 * Return: void
*/
void cpy_str(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
