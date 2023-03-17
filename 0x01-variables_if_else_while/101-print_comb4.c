#include <stdio.h>
/**
*main - prints all possible different combinations of two digits
*Return: 0 (SUCCESS)
*/
int main(void)
{
int n;
int p;
int k;
for (n = 0 ; n < 10 ; n++)
{
for (p = n + 1 ; p < 10 ; p++)
{
for (k = p + 1 ; k<10 ; k++)
{
putchar(48 + n);
putchar(48 + p);
putchar(48 + k);            
if (n == 7 && k == 9)
continue; 			
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
