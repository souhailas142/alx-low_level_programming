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
 * _puts - print string
 * @s: string
 * Return: nothing
 */
void _puts(char *s)
{
if (*s)
{
_putchar(*s);
_puts(s + 1);
}
else
{
_putchar('\n');
}
}
/**
 * main - program that multiplies two numbers
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
if (argc > 2)
{
int nbr1 = (argv[1][0] - 48);
int nbr2 = (argv[2][0] - 48);
int multi = nbr1 * nbr2;
print_number(multi);
_putchar('\n');
}
else
{
_puts("Error");
return (1);
}
return (0);
}
