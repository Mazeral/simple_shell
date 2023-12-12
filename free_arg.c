#include "main.h"

/**
 * free_arg - frees a double pointer, usually a argv or env
 * @arg: The argument to be freed
 * Return: Nothing
 */

void free_arg(char **arg)
{
	int i = 0;

	for (; arg[i] != NULL; i++)
		free(arg[i]);
	free(arg);
}
