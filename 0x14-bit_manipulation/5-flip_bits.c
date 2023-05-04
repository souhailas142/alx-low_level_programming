#include "main.h"
/**
 * flip_bits - function flip bits
 * @n: n
 * @m: m
 * Return: SUCCEDD
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;
		xor = xor >> 1;
	}
	return (c);
}
