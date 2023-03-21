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
j = 0;
while (j < 10)
{
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
_putchar(',');
_putchar(' ');
}
_putchar('\n');
i++;
}
}
