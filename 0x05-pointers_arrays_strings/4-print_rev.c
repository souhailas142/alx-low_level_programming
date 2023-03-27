#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int i = _strlen(s) - 1;
while (i != -1)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
