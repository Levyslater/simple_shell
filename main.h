#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

/* Macros*/
#define SIZE 128
#define DELIM " \t\n"
extern char **environ;

/*functions prototypes*/
int argument_size(char *inputs);
void print_error(char *name, char *cmd, int indx);
char *_getpath(char *command);
char *read_inputs(void);
void display_prompt(void);
void _free_memory(char **vector);
int _execute(char *appended, char **command);
void rev_str(char *str, int len);
char *int_str(int str);
void print_env(void);
char *_path_value(const char *path);
char *_input_path(char *input);
int empty_input(char **command, char **argv, int count, int status);
char **token_generator(char *arguments);

/*string literals*/
void cpy_str(char *dest, const char *src);
int _strcmp(char *s1, char *s2);
char *dup_str(const char *str);
char *_strcat(char *dest, char *src);
int _strcspn(char *s, char *accept);
int _strlen(const char *src);
int _strncmp(const char *s1, const char *s2, int len);
#endif
