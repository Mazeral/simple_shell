#include "main.h"
#include <stdlib.h>

/**
 * execmd - it does something
 * @argv: the argv in the main
 * @env: The environment variables
 * return: nothing
 */
void execmd(char **argv, char **env)
{
	int i;
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{
		if (argv[0][0] == '.')
		{
			command = argv[1];
			for (i = 0; argv[i] != NULL; i++)
			{
				if (_strcmp(command, "env") == 0)
					print_env(env);
				else if (_strcmp(command, "exit") == 0)
					exit(EXIT_SUCCESS);
				command = _strdup(get_location(argv[1]));
				if (command != NULL)
					if (execve(command, argv + 1, env) == -1)
						safe_free(command);
			}
		}
		else
		{
			command = argv[0];
			if (command != NULL)
			{
				actual_command = get_location(command);
				if (_strcmp(command, "exit") == 0)
				{
					free_args(2, command, actual_command);
					return;
				}
				else if (actual_command != NULL)
					if (execve(actual_command, argv, env) == -1)
						free_args(2, command, actual_command);
			}
		}
	}
}
