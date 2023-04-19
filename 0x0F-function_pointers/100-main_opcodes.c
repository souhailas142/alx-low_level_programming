#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (Success)
 */
int main(int argc, char **argv)
{
	char *m = (char *)main;
	int nbr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbr = atoi(argv[1]);
	if (nbr < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (nbr--)
	{
		printf("%02hhx%s", *m, nbr ? " " : "\n");
		m++;
	}
	return (0);
}
