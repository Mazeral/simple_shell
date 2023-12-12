#include "main.h"
/**
 * is_reactive - a function for the reactive response of the shell
 * @argc: The argument count
 * @env: The environment variables
 * Return: Nothing
 */
int is_reactive(int argc, char **env)
{
	int pid, status = 1;
	char **args = NULL;

	while (true)
	{
		/*
		 *get and process the input, make it tokenized
		 *return a int value, -1 when getline_value is -1
		 */
		if (input_proc(&args) == -1)
		{
			free_arg(args);
			break;
		}
		pid = fork();
		if (pid == 0)
			execmd(args, env);
		else
		{
			waitpid(pid, &status, 0);
			/* Sends the status to the main function to return it */
			if (_strcmp(args[0], "exit") == 0)
			{
				free_arg(args);
				break;
			}
		}
		free_arg(args);
	}

	return (status);
}
