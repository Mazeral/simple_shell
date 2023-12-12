#include "main.h"
#include<stdio.h>

/**
 * _strcpy - a function that copies a string
 * @dest: the copy
 * @src: the copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, const char *src)
{
	char *temp = dest;
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		temp[i] = src[i];
	}
	temp[len] = '\0';
	return (temp);
}
