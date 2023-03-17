#include <stdio.h>
/**
*main - Print all the lowercase alphabet in reverse
*Return: 0 (SUCCESS)
*/
int main(void)
{
char cL = 'z';
while (cL >= 'a')
{
putchar(cL);
cL--;
}
putchar('\n');
return (0);
}
