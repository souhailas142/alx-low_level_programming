#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: the first occurrence of the character @c in the string @s
 */
char *_strchr(char *s, char c)
{
int i = 0, f;
while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
f = i;
break;
}
}
return (s + f);
}
