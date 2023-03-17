#include <stdio.h>
/**
*main - program prints all possible combinations of single-digit numbers.
*Return: 0 (SUCCESS)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(48 + n);
if (n != 9)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
