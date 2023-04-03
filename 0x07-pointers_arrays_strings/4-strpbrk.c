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
char *c;
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
}
if (found)
{
c = (s + i);
break;
}
else
{
c = NULL;
}
i++;
}
return (c);
}
