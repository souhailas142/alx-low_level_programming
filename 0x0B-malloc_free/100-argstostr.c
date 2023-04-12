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
if (ac == 0 || av == NULL)
return (0);
int i = 0, j, k = 0, nc = 0;
char *str;
while (i < ac)
{
nc += _strlen(av[i]);
i++;
}
str = malloc(nc *sizeof(char *) + 1);
if (str == 0)
return (0);
if (ac > 1)
{
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
}
return (str);
}
