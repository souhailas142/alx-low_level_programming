#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_number - print number
 * @n: number
 * Return: 0 (SUCCESS)
 */
void print_number(int n)
{
unsigned int k = n;
if (n < 0)
{
n *= -1;
k = n;
_putchar('-');
}
k /= 10;
if (k != 0)
{
print_number(k);
}
_putchar((unsigned int) n % 10 + '0');
}
/**
 * main - program that adds positive numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
int add = 0;
if (argc > 1)
{
int i = 1;
while (i < argc)
{
if (atoi(argv[i]) != 0)
{
add += atoi(argv[i]);
}
else
{
puts("Error");
return (1);
}
i++;
}
print_number(add);
_putchar('\n');
}
else
{
print_number(0);
_putchar('\n');
return (1);
}
return (0);
}
