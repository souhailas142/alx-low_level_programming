#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
int h = 0;
int m = 0;
while (h <= 23 )
{
while (m < 60)
{
if (h < 10 && m < 10)
{
printf("0%d:0%d\n", h, m);
}
else if (h < 10)
{
printf("0%d:%d\n", h, m);
}
else
{
printf("%d:%d\n", h, m);
}
m++;
}
m = 0;
h++;
}
}
