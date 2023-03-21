#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: int number
 * Return: 0
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
if (n > 98)
{
printf("%d, ", n);
n--;
}
}
printf("%d", n);
_putchar('\n');
}
