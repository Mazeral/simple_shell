#include "main.h"
/**
 * my_exit - excutes system commands
 * @argv: The arguments
 * Return: Exit status
 */
void my_exit(char **argv)
{
	char *tmp = NULL;

	if (argv[0][0] == '.')
	{
		_strcpy(tmp, argv[1]);
		if (_strcmp("exit", tmp) == 0)
		{
			exit(EXIT_SUCCESS);
		}
		else
		exit(EXIT_FAILURE);
	}
	if (argv[0] != NULL)
	{
		_strcpy(tmp, argv[0]);
		if (_strcmp("exit", tmp) == 0)
		{
			exit(EXIT_SUCCESS);
		}
		exit(EXIT_FAILURE);
	}
}
