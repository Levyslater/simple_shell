/*handled*/
#include "main.h"

/**
 * rev_str - reverse a string
 * @str: pointer to string to reverse
 * @len: string length
 * Return: null
*/

void rev_str(char *str, int len)
{
	char ptr;
	int i;
	int k = --len;

	for (i = 0; i < k; i++)
	{
		ptr = str[k];
		str[k] = str[i];
		str[i] = ptr;
		k--;
	}
}
