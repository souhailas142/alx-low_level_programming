#include "main.h"
#include <stdlib.h>
#include <string.h>
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
 * count_wrd - count word in string
 * @str: string
 * Return: number of words
 */
int count_wrd(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}
/**
 * strtow - function that splits a string into words.
 * @str: string
 * Return: SUCCESS
 */
char **strtow(char *str)
{
	int i, j, start, end, len, cw;
	char *word;
	char **words;

	cw = count_wrd(str);
	if (str == NULL || _strlen(str) == 0 || cw == 0)
		return (0);
	words = malloc((cw + 1) * sizeof(char *));
	if (words == NULL)
		return (0);
	i = 0;
	j = 0;
	while (str[i] && j < cw)
	{
		start = i;
		while ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		end = i;
		len = end - start;
		if (len > 0)
		{
			word = malloc((len + 1) * sizeof(char));
			if (word == NULL)
				return (0);
			strncpy(word, str + start, len);
			word[len] = '\0';
			words[j] = word;
			j++;
		}
		else
		{
			i++;
		}
	}
	words[j] = 0;
	return (words);
}
