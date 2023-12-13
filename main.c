#include "main.h"

/**
 * main - enrty point
 * @argc: The count of our arguments
 * @argv: The arguments of the main function
 * @env: The enviroment varaibles
 * Return: 0 in success or else in failure
 */

int main(int argc, char **argv, char **env)
{
	int status = 0;

	
	if (!isatty(STDIN_FILENO) || argc > 1)
	{
		not_reactive(argv, env);
	}
	else
	{
		status = is_reactive(env);
	}
	return (status);
}
