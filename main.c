#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - enrty point
 * @argc: The count of our arguments
 * @argv: The arguments of the main function
 * @env: The enviroment varaibles
 * Return: 0 in success or else in failure
 */
int main(int argc, char **argv, char **env)
{
	int status = 0, pid;
	char *input = NULL;
	ssize_t getline_val = 1;
	size_t size = 0;
	FILE *file;

	while (getline_val != EOF)
	{
		if (!isatty(fileno(stdin)))
		{
			file = fopen(argv[1], "r");
			getline(&input, &size, file);
			fclose(file);
			remove_comment(input);
			pid = fork();
			if (pid == 0)
				input_proc(input, env);
			break;
		}
		else
		{
			_printf("cisfun$ ");
			getline_val = getline(&input, &size, stdin);
			if (getline_val == EOF)
			{
				safe_free(input);
				break;
			}
			pid = fork();
			if (pid == 0)
				input_proc(input, env);
		}
		waitpid(pid, &status, 0);
		status = WEXITSTATUS(status);
		if (_strcmp("exit\n",  input) == 0)
		{
			safe_free(input);
			break;
		}
	}
	return (status);
}
