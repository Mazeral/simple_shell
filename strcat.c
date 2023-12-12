#include "main.h"
/**
 * _strcat - A function that concats 2 stirngs
 * @dest: The original string
 * @src: The string which to be added to the original string
 * Return: concated string
 */
char *_strcat(char *dest, const char *src)
{
	char *rdest = dest;

	while (*dest)
	dest++;
	while ((*dest++ = *src++))
	;
	return (rdest);
}
