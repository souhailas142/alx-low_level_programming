#include "main.h"
#include <stdlib.h>
/**
 * _memset - function sets the first count bytes of @s to the value @c
 * @s: string
 * @c: character
 * @n: numbers of bytes
 * Return: pointer
 */
void *_memset(void *s, int c, int n)
{
	int i = 0;

	while (i < n)
	{
		*((char *)s + i) = c;
		i++;
	}
	return (s);
}
/**
 * _bzero -  The memory is set to zero
 * @s: string
 * @n: number of bytes
 * Return: pointer
 */
void _bzero(void *s, int n)
{
	_memset(s, 0, n);
}
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int len;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (0);
	len = nmemb * size;
	arr = malloc(len);
	if (!arr)
		return (0);
	_bzero(arr, len);
	return (arr);
}
