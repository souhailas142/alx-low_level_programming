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
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	rslt = f(nbr1, nbr2);
	printf("%d\n", rslt);
	return (0);
}
