#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: strng to be printed
 * Return: 0
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
}
_putchar('\n');
}
