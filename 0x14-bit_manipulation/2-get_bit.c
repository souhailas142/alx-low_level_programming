#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: n
 * @index: index
 * Return: SUCCESS
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int getB;

	if (index >= sizeof(n) * 8)
		return (-1);
	get = n >> index;
	return (get & 1);
}
