#include "shell.h"
/**
 * _getenv - get environment
 * @variable: Variable
 * Return: NULL
 */
char *_getenv(char *variable)
{
	char *tmp, *key, *value, *env;
	int i;

	for (i = 0; environ[i]; i++)
	{
		tmp = _strdup(environ[1]);
		key = strtock(tmp, "=");
		if (_strcmp(key, variable) == 0)
		{
			value = strtock(NULL, "\n");
			env = _strdup(value);
			free(tmp);
			return (env);
		}
		free(tmp), tmp = NULL;
	}
	return (NULL);
}
