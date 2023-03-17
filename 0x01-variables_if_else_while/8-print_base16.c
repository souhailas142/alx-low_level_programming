#include <stdio.h>
/**
*main - program that prints all the numbers of base 16 in lowercase
*Return: 0 (SUCCESS)
*/
int main(void)
{
int n = 0;
while (n < 10)
{
putchar((n % 10) + '0');
n++;
}
char c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
