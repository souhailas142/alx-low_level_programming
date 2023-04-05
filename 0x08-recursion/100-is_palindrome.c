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
int k = _len(s);
k++;
if (k == i)
return (1);
else
if (s[i] != s[k - i - 1])
return (0);
else
return (is_pali(s, i + 1));
}
/**
 * _len - length of string
 * @s: string
 * Return: len
 */
int _len(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _len(s + 1);
}
return (i);
}
