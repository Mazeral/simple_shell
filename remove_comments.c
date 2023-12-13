#include "main.h"
/**
 * remove_comment - a function that removes comments from bash.
 * @str: The source of the command
 * Return: Nothing
 */

void remove_comment(char **str)
{
	int i = 0, j = 0;

	/* finding a comment,then skipping it */
	while ((*str)[i])
	{
		if ((*str)[i] == '#')
		{
			while ((*str)[i] != '\n' && (*str)[i] != '\0')
				i++;
		}
		else
		{
			(*str)[j++] = (*str)[i++];
		}
	}
	(*str)[j] = '\0';
}
