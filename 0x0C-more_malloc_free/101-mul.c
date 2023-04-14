#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 * Return: @c
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * _puts - printf string
 * @s: string
 * Return: SUCCESS
 */
void _puts(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts(s + 1);
	}
}
/**
 * _atoi - string to number
 * @s: string number
 * Return: numberor 0
 */
unsigned long int _atoi(char *s)
{
	int i = 0, sg = 1;
	unsigned long int nbr = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sg = sg * (-1);
		else
			if (s[i] >= 48 && s[i] <= 57)
				nbr = nbr * 10 + (s[i] - 48);
			else
				return (0);
		i++;
	}
	return ((unsigned long int)nbr * sg);
}
/**
 * print_number - print number
 * @nbr: number
 * Return: number
 */
void print_number(unsigned long int nbr)
{
	unsigned long int k = n;

	if (n < 0)
	{
		n = n * (-1);
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		printf_number(k);
	_putchar((unsigned long int)n % 10 + '0');
}
/**
 * main - program that multiplies two positive numbers
 * @argc: numbers of arguments
 * @argv: arrays of arguments
 * Return: SUCCESS
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	printf_number(_atoi(argv[1]) * _atoi(argc[2]));
	_putchar('\n');
	return (0);
}
