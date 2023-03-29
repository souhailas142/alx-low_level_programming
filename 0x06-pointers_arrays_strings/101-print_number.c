#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: number
 * Return: number
 */
void print_number(int n)
{
unsigned int a;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
a = n;
if (a > 9)
{
print_number(a / 10);
print_number(a % 10);
}
else
{
_putchar(48 + a);
}
}
