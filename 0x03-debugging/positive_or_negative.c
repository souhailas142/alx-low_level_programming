#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*positive_or_negative - print the number if  n is positive, negative or zero
*Return: 0 (SUCCESS)
*/
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
} else if (n < 0)
{
printf("%d is negative\n", n);
} else
{
printf("%d is zero\n", n);
}
}
