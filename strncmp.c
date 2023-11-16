#include <stddef.h>
#include <stdio.h>


/**
 * _strncmp - function compare string values
 * @s1: input string1
 * @s2: input string2
 * @len: bits to compare
 * Return: s1[i] - s2[i]
 */

int _strncmp(const char *s1, const char *s2, int len)
{
	int i = 0;

	while (len)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		len--;
	}
	return (0);
}
