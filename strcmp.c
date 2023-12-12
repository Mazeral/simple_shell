#include "main.h"
/**
 * _strcmp - a function to compare 2 strings
 * @s1: The first string
 * @s2: The second string
 * Return: Number of differences
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
		return (*s1 - *s2);
		}
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
