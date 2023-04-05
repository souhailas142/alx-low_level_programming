#include "main.h"
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
