#include "main.h"

/**
 * input_proc - process the input of the user
 * @argv: The argument passed from the user
 * Return: The value of getline function
 */

void input_proc(char *input, char **env)
{
	char *input_cpy = NULL, *input_cpy2 = _strdup(input),
	D[] = " \n",*token, **argv;
	size_t token_cnt = 0, i = 0;

	input_cpy = malloc(_strlen(input) + 1);
	_strcpy(input_cpy, input);
	token = strtok(input_cpy2, D);
	while (token != NULL)
	{
		token_cnt++;
		token = strtok(NULL, D);
	}
	argv = malloc(sizeof(char *) * (token_cnt + 1));
	token = strtok(input_cpy, D);
	for (i = 0; token; i++, token = strtok(NULL, D))
	{
		argv[i] = _strdup(token);
	}
	argv[i] = NULL;
	free_args(2, input_cpy, input_cpy2);
	execmd(argv, env);
}
