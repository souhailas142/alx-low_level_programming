#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a:  array of integers
 * @n: number of elements of the array
 * Return: 0
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
i++;
}
_putchar('\n');
}
