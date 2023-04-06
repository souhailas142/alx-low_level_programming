#include "main.h"
#include <stdbool.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, nbr = 0;
bool found;
while (*(s + i) != '\0')
{
j = 0;
found = false;
while (*(accept + j) != '\0')
{
if (*(s + i) == *(accept + j))
{
found = true;
break;
}
j++;
}
if (!found)
break;
else
nbr++;
i++;
}
return (nbr);
}
