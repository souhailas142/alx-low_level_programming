#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	while (i < count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
