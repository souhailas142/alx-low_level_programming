#include "main.h"
/**
 * *_strncat - function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
while (*(dest + i))
i++;
while (*src != '\0')
{
*(dest + i) = *src;
src++;
i++;
}
*(dest + i) = '\0';
return (dest);
}
