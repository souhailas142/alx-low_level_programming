#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert nbr string to number
 * @s: string
 * Return: number or 0
 */
int _atoi(char *s)
{
int number = 0, i = 0;
int sg = 1;
int size = 0;
while (s[size] != '\0')
size++;
while (i < size)
{
if (s[i] == '-')
{
sg = -1;
}
else
if (s[i] >= '0' && s[i] <= '9')
{
number = 10 * number + (s[i] - 48);
}
else
{
return (0);
}
i++;
}
return (number *sg);
}
/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
int add = 0, i;

if (argc > 1)
{
i = 1;
while (i < argc)
{
if (_atoi(argv[i]) != 0)
{
add += _atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", add);
}
else
{
printf("0\n");
return (1);
}
return (0);
}
