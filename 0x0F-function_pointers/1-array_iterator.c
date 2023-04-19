#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array of integers
 * @size: the size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
