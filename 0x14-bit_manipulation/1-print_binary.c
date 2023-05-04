#include "main.h"
/**
 * print_binary - decimal to binary
 * @n: number
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, t = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			t++;
		}
		else if (t)
			_putchar('0');
	}
	if (!t)
		_putchar('0');
}
