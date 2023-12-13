#include "main.h"
/**
 * free_args - free a list of char * variables.
 * @count: The number of variables
 * Return: Nothing
 */
void free_args(int count, ...)
{
	int i;
	va_list args;
	char *arg = NULL;

	va_start(args, count);
	for (i = 0; i < count; i++)
	{
		arg = va_arg(args, char *);
		if (arg != NULL)
		{
			safe_free(arg);
			arg = NULL;
		}
	}

	va_end(args);
}
