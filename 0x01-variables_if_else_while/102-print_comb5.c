#include <stdio.h>
/**
*main - prints all possible different combinations of two two-digit numbers.
*Return: 0 (SUCCESS)
*/
int main(void)
{
int n;
int p;
for (n = 0 ; n < 99 ; n++)
{
for (p = n + 1 ; p <= 99 ; p++)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
putchar(32);
putchar((p / 10) + '0');
putchar((p % 10) + '0');
if (n == 98 && p == 99)
continue;
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
