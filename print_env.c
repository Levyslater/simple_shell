#include "main.h"
/**
 * print_env - print environmental variables
 *
 * Return: void
*/

void print_env(void) /*freeing memory can be done in the main function*/
{
	char **buffer = environ;

	while (*buffer)
	{
		write(STDOUT_FILENO, *buffer, _strlen(*buffer));
		write(STDOUT_FILENO, "\n", 1);
		buffer++;
	}
}
