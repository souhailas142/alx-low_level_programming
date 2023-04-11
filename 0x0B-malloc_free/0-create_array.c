#include "main.h"
#include <stdlib.h>
/**
 * _memset - function to fill a block of memory
 * @s : Starting address of memory to be filled
 * @c : Value to be filled
 * @len : Number of bytes to be filled
 *  Return: @s
 */
void *_memset(void *s, int c, int len)
{
	int i = 0;

	while (i < len)
	{
		*((char *)s + i) = c;
		i++;
	}
	return (s);
}
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: SUCCESS
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = (char *)malloc(size * sizeof(char));
	if (size == 0 || arr == 0)
		return (0);
	_memset(arr, c, size * sizeof(char));
	return (arr);
}
