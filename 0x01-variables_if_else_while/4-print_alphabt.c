#include <stdio.h>
/**
*main - Print all the alphabet except q and e
*Return: 0 (SUCCESS)
*/
int main(void)
{
char cL = 'a';
while (cL <= 'z')
{
if( cL == 'e' || cL == 'q')
{
cL++;
continue;
}
putchar(cL);
cL++;
}
putchar('\n');
return (0);
}
