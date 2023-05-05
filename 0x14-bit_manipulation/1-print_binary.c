#include "main.h"
/**
 * print_binary - decimal to binary
 * @n: number
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int b, last_bit;

	b = sizeof(n) * 8 - 1;
	last_bit = 0;
	while (b >= 0)
	{
		if ((n >> b) & 1)
		{
			_putchar('1');
			last_bit = 1;
		}
		else if (last_bit)
			_putchar('0');
		b--;
	}
	if (!last_bit)
		_putchar('0');
}
