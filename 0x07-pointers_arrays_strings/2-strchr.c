#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: 0 (SUCCESS)
 */
char *_strchr(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (s);
	if (s[i] == c)
		return (s);
	return (NULL);
}
