#include "main.h"

/**
 * _free_memory - Free array of pointers
 * @vector: A pointer that points to an array of pointers
 * Return: returns void.
 */

void _free_memory(char **vector)
{
	int i;

	if (vector == NULL)
		return;

	for (i = 0; vector[i]; i++)
	{
		free(vector[i]);
		vector[i] = NULL;
	}
	free(vector);
	vector = NULL;
}
