#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte.
 * @s: string
 * @b: character
 * @n:number of bytes
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n && *(s + i) != '\0')
{
*(s + i) = b;
i++;
}
return (s);
}
