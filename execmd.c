#include "main.h"
/**
 * execmd - it does something
 * @argv: the argv in the main
 * @env: The environment variables
 * return: nothing
 */
void execmd(char **argv, char **env)
{
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{ command = argv[0];
		if (command != NULL)
		{
			actual_command = get_location(command);
			if (actual_command != NULL)
				if (execve(actual_command, argv, env) == -1)
					free_args(2, command, actual_command);
		}
	}
}
