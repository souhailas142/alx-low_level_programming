#include "main.h"
/**
 * is_prime_number - prime number
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
return (_prime(n, n / 2));
}
/**
 * _prime - prime number
 * @n: number
 * @h: iteration
 * Return: 0 or 1
 */
int _prime(int n, int h)
{
if (h == 1)
return (1);
else
if (n % h == 0)
return (0);
else
return (_prime(n, h - 1));
}
