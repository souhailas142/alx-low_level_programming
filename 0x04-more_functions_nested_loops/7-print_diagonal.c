#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number
 * Return: 0
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i = 0, j;
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
}
}
