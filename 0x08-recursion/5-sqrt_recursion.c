#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number
 * Return: sqrt root of a number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - calcule the square root
 * @n: number
 * @x: iteration
 * Return: square
 */
int _sqrt(int n, int x)
{
int s = x * x;
if (s > n)
return (-1);
if (s == n)
return (x);
return (_sqrt(n, x + 1));
}
