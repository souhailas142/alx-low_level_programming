#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (0);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (0);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
