#include "main.h"

/**
 * input_proc - process the input of the user
 * @argv: The argument passed from the user
 * Return: The value of getline function
 */

char **input_proc(char *input)
{
	char *input_cpy = NULL, *input_cpy2 = _strdup(input),
	D[] = " \n",*token, **argv;
	ssize_t getline_val = 1;
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
	free(input_cpy);
	for (i = 0; argv[i] != NULL; i++)
		_printf("%s\n", argv[i]);
	return (argv);
}
