#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
/**
 * _puts - print string
 * @s: string
 * Return: 0 (SUCCESS)
 */
void _puts(char *s)
{
if (*s)
{
_putchar(*s);
_puts(s + 1);
}
else
{
_putchar('\n');
}
}
int main(int argc, char *argv[])
{
_puts(argv[argc - argc]);
return (0);
}
