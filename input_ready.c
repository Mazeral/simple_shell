#include "main.h"
/**
 * input_ready - a function that removes the comments and the newlines.
 * @s: The input to ready
 * Return: Nothing
 */
void input_ready(char *s)
{
	ssize_t i = 0;

	remove_comment(&s);
	remove_line(&s);
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '\n' || s[i] == '\t' || s[i] == '\v' ||
			s[i] == '\f' || s[i] == '\r')
		s[i] = ' ';
	}
}
