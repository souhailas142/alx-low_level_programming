#include "main.h"
/**
 * is_palindrome - function check is palindrome
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
return (is_pali(s, 0));
}
/**
 * is_pali - is palindrome
 * @s: string
 * @i: iteration
 * Return: 0 or 1
 */
int is_pali(char *s, int i)
{
int k = 0;
while (s[k] != '\0')
k++;
if (k == i)
return (1);
else
if (s[i] != s[k - i - 1])
}
return (0);
}
else
{
is_pali(s, i + 1);
}
}
