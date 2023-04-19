#include "3-calc.h"
/**
 * main - that performs simple operations.
 * @argc: numbers of args
 * @argv: array of args
 * Return: SUCCESS
 */
int main(int argc, char *argv[])
{
	int nbr1, nbr2, rslt;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && nbr2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	rslt = func(nbr1, nbr2);
	printf("%d\n", rslt);
	return (0);
}
