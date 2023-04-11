#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1 : string 1
 * @s2 : string 2
 * Return: SUCCESS
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;
	s = (char *)malloc(len * sizeof(char) + 1);
	if (s == 0)
		return (0);
	while (i < len)
	{
		if (i < len1)
			s[i] = s1[i];
		else
		{
			s[i] = s2[j];
			j++;
		}
		i++;
	}
	return (s);
}
