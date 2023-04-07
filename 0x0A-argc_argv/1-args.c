#include "main.h"
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
 * main - program that prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
(void)argv;
if (argc > 1)
{
int i = 0;
while (i < argc - 1)
{
i++;
}
print_number(i);
_putchar('\n');
}
else
{
_putchar(48);
_putchar('\n');
}
return (0);
}
