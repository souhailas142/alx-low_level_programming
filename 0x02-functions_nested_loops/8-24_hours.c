#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
int h1 = 0;
while (h1 <= 2)
{
int h2 = 0;
while (h2 <= 9)
{
int m1 = 0;
while (m1 <= 5)
{
int m2 = 0;
while (m2 <= 9)
{
if (h1 >= 2 && h2 >= 4)
break;
_putchar(48 + h1);
_putchar(48 + h2);
_putchar(58);
_putchar(48 + m1);
_putchar(48 + m2);
_putchar('\n');
m2++;
}
m1++;
}
h2++;
}
h1++;
}
}
