#include "main.h"
/**
 * _isNbr - string to int
 * @s: string number
 * Return: number or 0
 */
int _isNbr(const char *s)
{
	int number, i, size;

	number = 0;
	i = 0;
	size = 0;
	while (s[size] != '\0')
		size++;
	while (i < size)
	{
		if (s[i] >= '0' && s[i] <= '9')
			number = 10 * number + (s[i] - 48);
		else
			return (0);
		i++;
	}
	return (number);
}
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

	if (_isNbr(b) == 0 || !b)
		return (0);
	i = 0;
	len = _strlen(b) - 1;
	nbr = 0;
	while (b[i] && len != -1)
	{
		nbr += (_pow_recursion(2, len) * (b[i] - 48));
		i++;
		len--;
	}
	return (nbr);
}
