#include "main.h"

/**
 * _strcspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: Always 0
 */

int _strcspn(char *s, char *accept)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == accept[0])
		{
			break;
		}
		index++;
	}
	return (index);
}
