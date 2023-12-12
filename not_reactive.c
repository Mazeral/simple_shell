#include"main.h"

/**
 * not_reactive - a function for the not interactive shell
 * @argv: The vector of arguments
 * @env: The environment variables
 * Return: Nothing really
 */
void not_reactive(char **argv, char **env)
{
	execmd(argv, env);
}
