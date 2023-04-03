#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string
 * @b: character
 * @n: number of bytes
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*((char *)s + i) = b;
i++;
}
return (s);
}
