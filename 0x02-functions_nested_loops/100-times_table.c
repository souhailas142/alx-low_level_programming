#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int number
 * Return: 0 
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 1;
	int num = 0;
	int tmp = 0;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		putchar('0');
		if (n != 0)
		{
			putchar(',');
			putchar(' ');
		}
		while (j <= n)
	{
		num = i * j;
		if ((num / 10) > 0)
		{
			tmp = (num / 10);
			if (tmp > 9)
			{
				putchar((tmp / 10) + '0');
				putchar((tmp % 10) + '0');
			}
			else
			{
				putchar(' ');
				putchar((num / 10) + '0');
			}
		}
		else
		{
			putchar(' ');
			putchar(' ');
		}
		putchar((num % 10) + '0');
		if (j != n)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
		putchar('\n');
		i++;
		j = 1;
	}
}
