#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int i = 0, j;
while (*(str + i) != '\0')
i++;
if (i % 2 == 1)
j = (i / 2);
else
j = ((i - 1) / 2);
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
