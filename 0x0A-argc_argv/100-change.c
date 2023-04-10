#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
int t, c;
unsigned int i = 0;
char *s;
int cents[] = {25, 10, 5, 2};
if (argc != 2)
{
printf("Error\n");
return (1);
}
t = strtol(argv[1], &s, 10);
c = 0;
if (!*s)
{
while (t > 1)
{
while (i < sizeof(cents[i]))
{
if (t >= cents[i])
{
c += t / cents[i];
t = t % cents[i];
}
i++;
}
}
if (t == 1)
c++;
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", c);
return (0);
}
