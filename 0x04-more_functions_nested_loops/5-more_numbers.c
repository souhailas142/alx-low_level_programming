#include "main.h"
/**
 * more_numbers - print more number
 * Return: 0
*/
void more_numbers(void)
{
int i = 0, n;
while (i < 10)
{
n = 0;
while (n <= 14)
{
if (n >= 10)
_putchar(48 + 1);
_putchar(48 + (n % 10));
n++;
}
_putchar('\n');
i++;
}
}
