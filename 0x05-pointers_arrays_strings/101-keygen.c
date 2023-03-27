#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: 0
 */
int main(void)
{
int i, nbr;
i = nbr = 0;
srand(time(0));
while (i < 2772)
{
nbr = rand() % 128;
if ((i + nbr) > 2772)
break;
i += nbr;
printf("%c", nbr);
}
return (0);
}
