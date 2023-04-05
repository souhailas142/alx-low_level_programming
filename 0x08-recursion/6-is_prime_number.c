#include "main.h"
/**
 * is_prime_number - prime number
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
return (_prime(n, 1));
}
/**
 * _prime - prime number
 * @n: number
 * @h: iteration
 * Return: 0 or 1
 */
int _prime(int n, int h)
{
if (n <= 1)
return (0);
if (n % h == 0 && h > 1)
return (0);
if ((n / h) < h)
return (1);
return (_prime(n, h + 1));
}
