#include "main.h"
/**
 * my_exit - excutes our system commands
 * @argv: The arguments
 * Return: Exit status
 */
void my_exit(char **argv)
{
	char *tmp = NULL;

	if (argv[0][0] == '.')
	{
		tmp = _strdup(argv[1]);
		if (_strcmp("exit", tmp) == 0)
		{
			safe_free(tmp);
			free_arg(argv);
			exit(EXIT_SUCCESS);
		}
	}
	else if (argv[0] != NULL)
	{
		tmp = _strdup(argv[1]);
		if (_strcmp("exit", tmp) == 0)
		{
			safe_free(tmp);
			free_arg(argv);
			exit(EXIT_SUCCESS);
		}
	}
}
