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
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument values
 * Return: SUCCCESS
 */
char *argstostr(int ac, char **av)
{
int i, j, k, nc;
char *str;
if (ac == 0 || av == NULL)
return (0);
i = 0;
nc = 0;
while (i < ac)
{
nc += _strlen(av[i]);
i++;
}
str = malloc((nc + 1) * sizeof(char *));
if (str == 0)
return (0);
k = 0;
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
k++;
i++;
}
return (str);
}
