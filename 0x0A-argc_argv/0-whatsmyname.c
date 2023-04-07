#include <unistd.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument counter
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
/**
 * _putchar - writes the character
 * @c: character
 * Return: success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
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
_puts(argv[argc - 1]);
return (0);
}
