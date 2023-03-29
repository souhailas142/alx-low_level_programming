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
int i, j;
i = 0;
while (*(dest + i) != '\0')
i++;
j = 0;
while (j <= (n - 1) && *src != '\0')
{
*(dest + i) = *src;
src++;
i++;
j++;
}
*(dest + i) = '\0';
return (dest);
}
