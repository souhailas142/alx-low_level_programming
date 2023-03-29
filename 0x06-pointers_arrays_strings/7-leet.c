#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
char cl[] = {"aeotl"};
char cu[] = {"AEOTL"};
char nbr[] = {"43071"};
int i, j;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (j < 5)
{
if (s[i] == cl[j] || s[i] == cu[j])
{
s[i] = nbr[j];
}
j++;
}
i++;
}
return (s);
}
