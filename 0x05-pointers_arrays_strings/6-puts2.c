#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
int j = 0, i = 0;
while (*(str + j) != '\0')
j++;
while (i < j)
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
