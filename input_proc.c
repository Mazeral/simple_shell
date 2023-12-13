#include "main.h"

/**
 * input_proc - process the input of the user
 * @input: The argument passed from the user
 * Return: The value of getline function
 */

char **input_proc(char *input)
{
	char *input_cpy = NULL, *input_cpy2 = NULL,
	D[] = " \n", *token, **argv;
	size_t token_cnt = 0, i = 0;

	if (input != NULL)
	{
		input_cpy2 = _strdup(input);
		input_cpy = _strdup(input);
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
		return (argv);
	}
	return (NULL);
}
