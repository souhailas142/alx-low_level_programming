#include "main.h"
/**
 * *rot13 -  function that encodes a string using rot13.
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;
i = 0;
while (*(s + i) != '\0')
{
j = 0;
while (j < 53)
{
if (*(s + i) == c[j])
{
*(s + i) = rot13[j];
break;
}
j++;
}
i++;
}
return (s);
}
