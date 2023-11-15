/* handled*/
#include "main.h"

/**
 * int_str - convert int to string
 * @str: integer to convert
 * Return: address of string
 */

char *int_str(int str)
{
	char buffer[SIZE];
	int i = 0;
	int rem;

	if (str == 0)
	{
		buffer[i++] = '0';
		buffer[i] = '\0';
	}
	else
	{
		while (str)
		{
			rem = str % 10;
			buffer[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
			str /= 10;
		}
		buffer[i] = '\0';
		rev_str(buffer, i);
	}
	return (dup_str(buffer));
}
