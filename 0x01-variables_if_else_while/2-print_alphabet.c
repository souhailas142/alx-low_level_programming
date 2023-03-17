#include <stdio.h>
/**
*main - prints the alphabet in lowercase
*Return: 0 (SUCCESS)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	putchar('\n');
	c++;
}
return (0);
}
