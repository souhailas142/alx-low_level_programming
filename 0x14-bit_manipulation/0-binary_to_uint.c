#include "main.h"
/**
 * _strlen - len string
 * @str: string
 * Return: len
 */
int _strlen(const char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/**
 * _pow_recursion - function x raised to the power of y
 * @x: nbr 1
 * @y: nbr 2
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_to_uint - binary number to an unsigned int
 * @b: binary number
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int nbr, i, len;

	if (!b)
		return (0);
	i = 0;
	len = _strlen(b) - 1;
	nbr = 0;
	while (b[i] && len != -1)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			nbr += (_pow_recursion(2, len) * (b[i] - 48));
			i++;
			len--;
		}
	}
	return (nbr);
}
