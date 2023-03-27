#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: string;
 * Return: number
 */
int _atoi(char *s)
{
int i = 0, rslt = 0, sg = 1;
while (*(s + i) != '\0')
{
if ((*(s + i) == 32) || ((*(s + i) >= 9) && (*(s + i) <= 13)))
i++;
if (*(s + i) == '-')
sg *= -1;
else if (*(s + i) >= '0' && *(s + i) <= '9')
rslt = (rslt * 10) + (*(s + i)-'0');
else if (rslt > 0)
break;
i++;
}
rslt *= sg;
return (rslt);
}
