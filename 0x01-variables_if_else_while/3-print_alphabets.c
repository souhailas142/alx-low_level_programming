#include <stdio.h>
/**
*main - program that prints the alphabet in lowercase, and then in uppercase
*Return: 0 (SUCCESS)
*/
int main(void)
{
char cL = 'a';
char cU = 'A';
while (cL <= 'z')
{
        putchar(cL);
        cL++;
}
while (cU <= 'Z')
{
        putchar(cU);
        cU++;
}
putchar('\n');
return (0);
}
