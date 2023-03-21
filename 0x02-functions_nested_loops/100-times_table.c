#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int number
 * Return: 0
 */
/**
 *  fun -
 * @m: number
 * @k: number
 *
 */
void fun(int m, int k)
{
if ((m / 10) > 0)
{
k = (m / 10);
if (k > 9)
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else
{
_putchar(' ');
_putchar((m / 10) + '0');
}
}
else
{
_putchar(' ');
_putchar(' ');
}
_putchar((m % 10) + '0');
}
void print_times_table(int n)
{
int i = 0;
int j = 1;
int m = 0;
int k = 0;
if (n > 15 || n < 0)
return;
while (i <= n)
{
_putchar('0');
if (n != 0)
{
_putchar(',');
_putchar(' ');
}
while (j <= n)
{
m = i * j;
fun(m, k);
if (j != n)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
j = 1;
}
}
