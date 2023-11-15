#include "main.h"

/**
 * display_prompt - display terminal prompt
 *
 * Return: void
*/

void display_prompt(void)
{
	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2); /*displays when isatty return 1*/
}
