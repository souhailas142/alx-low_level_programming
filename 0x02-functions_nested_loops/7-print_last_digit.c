#include "main.h"
/**
 * print_last_digit - the last digit of a number.
 * @n: int number
 * Return: last digit
 */
int print_last_digit(int n)
{
int lastD = n % 10;
if (lastD < 0)
{
int a = (-lastD);
_putchar(48 + a);
return (a);
}
else
{
_putchar(48 + lastD);
return (lastD);
}
}
