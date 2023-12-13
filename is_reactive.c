#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_reactive - a function for the reactive response of the shell
 * @argc: The argument count
 * @env: The environment variables
 * Return: Nothing
 */
int is_reactive(int argc, char **env)
{
	int pid, status = 1, i = 0;
	char **args = NULL, *input = NULL,
	*prompt = "cisfun$";
	ssize_t getline_val;
	size_t size = 0;

	while (true)
	{
		/*
		 *get and process the input, make it tokenized
		 *return a int value, -1 when getline_value is -1
		 */
		_printf("%s ", prompt);
		getline_val = getline(&input, &size, stdin);
		if (getline_val == EOF)
		{
			free(input);
			return (getline_val);
		}
		pid = fork();
		if (pid != 0 )
			args = input_proc(input);
		if (pid == 0)
		{
			args = input_proc(input);
			if (args == NULL)
			{
				free(input);
				free(args);
				exit(EXIT_FAILURE);
			}
			execmd(args, env);
			free_arg(args);
		}
		else
		{
			waitpid(pid, &status, 0);
			/* Sends the status to the main function to return it */
			if (_strcmp(args[0], "exit") == 0)
			{
				break;
			}
		}
		free_arg(args);
	}

	return (status);
}
