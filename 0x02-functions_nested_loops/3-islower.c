#include "main.h"
/**
 * _islower -  function checks for lowercase character
 * @c: the character in ASCII code
 *  Return: 1 if c is lowercas, Return: 0 otherwise
 *
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
