#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
if (atoi(argv[i]) != 0)
{
add += atoi(argv[i]);
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
