#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: SUCCESS
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ptr, int));
		printf("%s", (separator && i < (n - 1)) ? separator : "");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
