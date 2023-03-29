#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: number
 * Return: number
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n > 9)
{
print_number(n / 10);
print_number(n % 10);
}
else
{
_putchar(48 + n);
}
}
