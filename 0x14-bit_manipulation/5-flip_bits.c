#include "main.h"
/**
 * flip_bits - function flip bits
 * @n: n
 * @m: m
 * Return: SUCCEDD
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, c = 0;

	while (xor)
	{
		c += (xor & 1);
		xor = xor >> 1;
	}
	return (c);
}
