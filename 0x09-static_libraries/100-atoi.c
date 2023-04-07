#include "main.h"
/**
 * _atoi - convert string to number
 * @s: string
 * Return: int
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
if ((s[i] >= '0') && (s[i] <= '9'))
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
