#include "main.h"
/**
 * *_strncpy - function that copies a string
 * @dest: destinatio
 * @src: source
 * @n: number
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *src)
{
*(dest + i) = *src;
src++;
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
