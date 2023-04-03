#include "main.h"
#include <stdbool.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
bool found;
while (*(s + i) != '\0')
{
j = 0;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
found = true;
break;
}
j++;
}
if (found)
{
return (s + i);
}
i++;
}
return (c);
}
