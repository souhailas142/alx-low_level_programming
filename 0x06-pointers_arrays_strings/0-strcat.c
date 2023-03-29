#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
while (*(dest + i) != '\0')
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
