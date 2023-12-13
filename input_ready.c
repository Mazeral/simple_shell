#include "main.h"
/**
 * input_ready - a function that removes the comments and the newlines.
 * @s: The input to ready
 * Return: Nothing
 */
void input_ready(char *s)
{
	remove_comment(&s);
	remove_line(&s);
}
