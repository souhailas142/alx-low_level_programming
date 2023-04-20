#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: SUCCESS
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *s;
	va_list ptr;

	s = "";
	i = 0;
	va_start(ptr, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ptr);
}
