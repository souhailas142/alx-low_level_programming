#include "main.h"
#include <stdlib.h>
/**
 * _strlen -  function calculates the length of a given string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: SUCCESS
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1, len2, lent;
	char *str;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (len1 == 0 || len2 == 0)
		return (0);
	if (n >= len2)
		n = len2;
	lent = len1 + n;
	str = malloc(lent * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (i < lent)
	{
		if (i < len1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
