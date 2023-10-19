#include "shell.h"
/**
 * handle_builtin - builting
 * @command: c
 * @argv: arf
 * @status: gdggdd
 * @idx: hsgdhsgdhsg
 * Return: void
 */

void handle_builtin(char **command, char **argv, int *status, int idx)
{
	(void) argv;
	(void) idx;
	if (_strcmp(command[0], "exit") == 0)
		exit_shell(command, status);

	else if (_strcmp(command[0], "env") == 0)
		print_env(command, status);
}

/**
 * are_builtin - hdgt
 * @command: trd
 *
 * Return: yigysydtg
 */
int is_builtin(char *command)
{
	char *builtins[] = {"exit", "env", "setenv", "cd", NULL};
	int i;

	for (i = 0; builtins[i]; i++)
	{
		if (_strcmp(command, builtins[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * exit_shell - jdjytdg exit
 * @command: hhdgd
 * @status: ksjhsshsdhds
 */

void exit_shell(char **command, int *status)
{
	freearray2D(command);
	exit(*status);
}

/**
 * print_env - guzdezueyzuetzez
 * @command: hdustde
 * @status: jksjsfgdydsyd
 *
 * Return: void
 */

void print_env(char **command, int *status)
{
	int i;

	for (i = 0; environ[i]; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	freearray2D(command);
	(*status) = 0;
}
