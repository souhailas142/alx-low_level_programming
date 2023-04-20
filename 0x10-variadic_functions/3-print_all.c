#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: SUCCESS
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *space;
	va_list ptr;

	space = "";
	i = 0;
	va_start(ptr, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
					printf("%s%s", space, "(nil)");
				else
					printf("%s%s", space, str);
				break;
			default:
				i++;
				continue;
		}
		space = ", ";
		i++;
	}
	printf("\n");
	va_end(ptr);
}
