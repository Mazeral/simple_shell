#include "main.h"

/**
 * execmd - it does something
 * @argv: the argv in the main
 * @env: The environment variables
 * return: nothing
 */
void execmd(char **argv, char **env)
{
	int i;
	char *command = NULL, *actual_command = get_location(command);

	if (argv)
	{
		/* get command */
		if (argv[0][0] == '.')
		{
			command = argv[1];
			for (i = 0; argv[i] != NULL; i++)
			{
				if (_strcmp(command, "env") == 0)
					print_env(env);
				else if (execve(command, argv + 1, NULL) == -1)
				{
					my_exit(argv);
				}
			}
		}
		else
		command = argv[0];

	if (command != NULL)
	{
		actual_command = get_location(command);
		/* execute command with execve */
		if (_strcmp(argv[0], "env") == 0)
			print_env(env);
		else if (execve(actual_command, argv, env) == -1)
		{
			my_exit(argv);
		}
	}
	}
}
