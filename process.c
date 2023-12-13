#include "main.h"
/**
 * process - a function to lower the lines
 * @input: The input
 * @args: The argument vector from main
 * @env: The environment vector from main
 * Return: Nothing
 */
void process(char *input, char **args, char **env)
{
	int pid = fork();

	if (pid == 0)
	{
		args = input_proc(input);
		execmd(args, env);
	}
}
