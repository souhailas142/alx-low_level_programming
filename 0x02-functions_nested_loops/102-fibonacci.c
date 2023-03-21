#include <stdio.h>
/**
 * main - the first 50 Fibonacci numbers
 * 
 * Return: always 0
 *
 */
int main(void)
{
        int f = 1;
	int s = 2;
	int i = 0;

	while (i < 50)
	{
		printf("%d", f);
		if (i < 49)
		{
			s += f;
			f = s - f;
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
