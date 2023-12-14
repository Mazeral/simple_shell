#include "main.h"
/**
 * is_empty - checks if the input is empty
 * @str: The string
 * Return: 0 if it is empty, 1 if not
 */
int is_empty(const char *str)
{
	char ch;

	do {
	ch = *(str++);

	if (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r' && ch != '\0')
	return (0);

	} while (ch != '\0');

	return (1);
}
