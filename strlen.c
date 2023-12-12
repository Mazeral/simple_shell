#include<string.h>
/**
 * _strlen - function to measure the string's length
 * @s: the string
 * Return: the length of s
 */
int _strlen(char *s)
{
int len = 0;
int i = 0;
while (s[i] != '\0')
{
len++;
i++;
}
return (i);
}
