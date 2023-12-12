#include "main.h"

/**
 * print_env - Print current environment.
 * @env: The environment variables
 * Return: Always returns 0.
 */
int print_env(char **env)
{
	int i = 0;

	for (; env[i] != NULL; i++)
		_printf("%s\n", env[i]);
	exit(EXIT_SUCCESS);
}
