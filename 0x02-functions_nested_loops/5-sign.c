#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : int number
 * Return:1 if n is greater than zero, Return: 0 if n is zero, Return: -1 if n is less than zero
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
