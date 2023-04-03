#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size of array
 * Return: sum of two diagonals
 */
void print_diagsums(int *a, int size)
{
int i = 0, j = 0;
unsigned int sumd1 = 0, sumd2 = 0;
while (i < (size * size) && j < (size * size))
{
j += (size - 1);
sumd2 += a[j];
sumd1 += a[i];
i += (size + 1);
}
printf("%d, %d", sumd1, sumd2);
}
