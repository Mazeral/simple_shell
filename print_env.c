#include "main.h"

/**
 * print_env - Printcurrent environment.
 * @env: The environment variables
 * Return: Always returns 0.
 */
void print_env(char **env)
{
	int i = 0;

	for (; env[i] != NULL; i++)
		_printf("%s\n", env[i]);
}
