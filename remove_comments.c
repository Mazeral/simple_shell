#include "main.h"
/**
 * remove_comments - a function that removes comments from bash.
 * @src: The source of the command
 * Return: Nothing
 */

void remove_comment(char **str) {
	int i = 0, j = 0;

	/* finding a comment,then skipping it */
	while ((*str)[i])
	{
		if ((*str)[i] == '#')
		{
			while ((*str)[i]!= '\n' && (*str)[i] != '\0')
				i++;
		}
		else
		{
			(*str)[j++] = (*str)[i++];
		}
	}
	(*str)[j] = '\0';
}
