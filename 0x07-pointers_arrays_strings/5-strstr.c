#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0 (SUCCESS)
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, k = 0;
while (*(haystack + i) >= '\0')
{
j = 0;
while (*(needle + j) >= '\0')
{
if (*(needle + i) == *(haystack + j))
{
k = 1;
break;
}
j++;
}
if (k == 1)
{
return (needle + j);
}
i++;
}
return ('\0');
}
