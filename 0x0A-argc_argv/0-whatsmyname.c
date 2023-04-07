#include "main.h"
/**
 * _puts - print string string string
 * @s: string
 * Return: nothing
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
/**
 * main - program that prints its name
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
_puts(argv[argc - argc]);
return (0);
}
