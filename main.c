#include "main.h"

/**
 * main - main function
 * @argv: contain commands
 * @argc: line count
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	char *inputs = NULL;
	char **instructions = NULL;
	int status = 0;

	argc = 0;

	while (1)
	{
		argc++;
		display_prompt();
		inputs = read_inputs();

		if (inputs == NULL)
		{
			if (isatty(STDOUT_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		instructions = token_generator(inputs);
		if (!instructions) /* token not NULL*/
			continue;
		status = empty_input(instructions, argv, argc, status);
	}
	return (status);
}
