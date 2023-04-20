#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	va_start(ptr, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}
	return (sum);
}
