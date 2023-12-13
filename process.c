#include "main.h"
/**
 * process - a function to lower the lines
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
