#include "main.h"

/**
 * print_error - print error when coomand is not found
 * @program_id: name of the shell program
 * @cmd: command typed
 * @count: line number
 * Return: void
*/

void print_error(char *program_id, char *cmd, int count)

{
	char *line_no;
	char error_code[] = "not found";

	line_no = int_str(count);
	write(STDERR_FILENO, program_id, _strlen(program_id));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, line_no, _strlen(line_no));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, error_code, _strlen(error_code));
	write(STDERR_FILENO, "\n", 1);

	free(line_no); /*there is malloc on int_str*/
}
