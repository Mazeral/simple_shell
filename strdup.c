#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @s1: The string
 * Return: a pointer if success, NULL if fail
 */
char *_strdup(char *s1)
{
	char *str;
	size_t size = strlen(s1) + 1;

	str = malloc(size);
	if (str)
	{
		memcpy(str, s1, size);
	}
	return (str);
}
