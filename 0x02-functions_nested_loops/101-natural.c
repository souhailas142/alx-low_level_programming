#include "main.h"
#include <stdio.h>
/**
 * _start - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: the sum
 */
void _start(void)
{
	int sum = 0;
	int i = 0;
	while (i <= 1024)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
