#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string @str
 * @str: string
 * Return: SUCCESS
 */
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *s;

	if (str == NULL)
		return (0);
	while (str[len] != '\0')
		len++;
	s = (char *)malloc(len * sizeof(*str) + 1);
	if (s == 0)
		return (0);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
