#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((!array || !cmp) || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
