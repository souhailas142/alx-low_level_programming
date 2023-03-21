#include "main.h"
/**
 * times_table - 
 * Return: 
 */
void times_table(void)
{
int i = 0, j, m;
while (i < 10)
{
_putchar('0');
j = 0;
while (j < 10)
{
_putchar(',');
_putchar(' ');
m = i*j;
if (m < 10)
{
_putchar(' ');
}
else
{
_putchar(48 + (m/10));
}
_putchar(48 + (m%10));
j++;
}
_putchar('\n');
i++;
}
}
