#include "main.h"
/**
 * is_reactive - a function for the reactive response of the shell
 * @argc: The argument count
 * @env: The environment variables
 * Return: Nothing
 */
int is_reactive(char **env)
{
	int pid, status = 0;
	char *input = NULL,
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
		if (getline_val == EOF || strcmp(input, "exit\n") == 0)
		{
			free(input);
			input = NULL;
			break;
		}
		else if (getline_val > -1)
		{
			pid = fork();
			if (pid == 0)
			{
				if (_strcmp("env", input) == 0)
				{
					print_env(env);
					break;
				}
				input_proc(input, env);
			}
			else
			{
				waitpid(pid, &status, 0);
			}
		}
	}
	return (status);
}
