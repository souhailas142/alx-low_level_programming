#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char r;
while (*(s + i) != '\0')
{
i++;
}
i -= 1;
while (j < i)
{
r = *(s + i);
*(s + i) = *(s + j);
*(s + j) = r;
j++;
i--;
}
return (s);
}
