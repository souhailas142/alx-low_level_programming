#include "main.h"
/**
 * *cap_string - function that capitalizes all words of a string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
int i, j;
i = 0;
while (*(s + i) != '\0')
{
if (*(s + i) == ' ' || *(s + i) == '\t' ||
*(s + i) == '\n' || *(s + i) == ',' ||
*(s + i) == ';' || *(s + i) == '.' ||
*(s + i) == '!' || *(s + i) == '?' ||
*(s + i) == '"' || *(s + i) == '(' ||
*(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}' || i == 0)
{
j = 'a';
while (j <= 'z')
{
if (*(s + i + 1) == j && i != 0)
{
*(s + i + 1) = j - 32;
}
else if (*(s + i) == j && i == 0)
{
*(s + i) = j - 32;
}
j++;
}
}
i++;
}
return (s);
}
