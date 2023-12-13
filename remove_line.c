#include "main.h"
/**
 * remove_line - removes the lines in a string
 * @s: The string
 * Return:to The string after it has been edited
 */
void remove_line(char **s)
{
	size_t i = 0, len = 0;

	while ((*s)[i] != NULL)
	{
		if ((*s)[i] == '\n')
			(*s)[i] = '\0';
		i++;
		len++;
	}
	(*s)[len] = '\0';
}
