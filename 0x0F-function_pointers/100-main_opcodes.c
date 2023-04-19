#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char *m = (char*)main;
	int i, nbr;

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
	i = 0;
	while (i < nbr)
	{
	printf("%02hhx ", *m);
	m++;
	i++;
	}
	printf("\n");

	return (0);
}
