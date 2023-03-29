#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 * Return: array
 */
void reverse_array(int *a, int n)
{
int i = n - 1;
int r;
while (i >= n / 2)
{
r = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = r;
i--;
}
}
