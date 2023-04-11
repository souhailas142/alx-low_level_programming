#include "main.h"
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
	if (size == 0)
	{
		return (0);
	}
	else
	{
		char *ptr;

		ptr = (char *)malloc(size * sizeof(char));
		_memset(ptr, c, size * sizeof(char));
		return (ptr);
	}
}
