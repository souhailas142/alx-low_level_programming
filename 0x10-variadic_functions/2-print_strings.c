#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: SUCCESS
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(ptr, char *);
		printf("%s", (str == NULL ? "(nil)" : str));
		printf("%s", (separator && i < (n - 1)) ? separator : "");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
