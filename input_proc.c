#include "main.h"
#include <stdlib.h>

/**
 * input_proc - process the input of the user
 * @argv: The argument passed from the user
 * Return: The value of getline function
 */

ssize_t input_proc(char ***argv)
{
	char *input = NULL, *input_cpy = NULL,
	*D = " \n", *prompt = "cisfun$", *token;
	ssize_t getline_val = 1;
	size_t size, token_cnt = 0, i = 0;

	_printf("%s ", prompt);
	getline_val = getline(&input, &size, stdin);
	if (getline_val == EOF)
	{
		free(input);
		return (getline_val);
	}
	input_cpy = malloc(strlen(input) + 1);
	_strcpy(input_cpy, input);
	token = strtok(input, D);
	while (token != NULL)
	{
		token_cnt++;
		token = strtok(NULL, D);
	}
	*argv = malloc(sizeof(char *) * (token_cnt + 1));
	if (*argv == NULL)
	{
		free(input);
		free(input_cpy);
		exit(EXIT_FAILURE);
	}
	token = strtok(input_cpy, D);
	for (i = 0; token; i++, token = strtok(NULL, D))
	{
		(*argv)[i] = malloc(_strlen(token) + 1);
		_strcpy((*argv)[i], token);
	}
	(*argv)[i] = NULL;
	free(input);
	free(input_cpy);
	return (getline_val);
}
