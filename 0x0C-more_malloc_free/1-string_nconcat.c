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
	unsigned int i, j, len1, len2, lent;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;
	lent = len1 + len2;
	str = malloc(sizeof(char) * lent + 1);
	if (!str)
		return (0);
	i = 0;
	j = 0;
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
