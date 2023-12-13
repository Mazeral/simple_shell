#include "main.h"
#include <unistd.h>
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
	char *input = NULL, **args;
	ssize_t getline_val = 1;
	size_t size = 0;
	FILE *file;

	while (getline_val != EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			_printf("cisfun$ ");
		}
		getline_val = getline(&input, &size, stdin);
		input_ready(input);
		if (getline_val == EOF || _strcmp("exit", input) == 0)
		{
			safe_free(input);
			break;
		}
		process(input, args, env);
		waitpid(0, &status, 0);
		status = WEXITSTATUS(status);
		if (!isatty(STDIN_FILENO))
			break;
	}
	if (input != NULL)
		free(input);
	input = NULL;
	return (status);
}
