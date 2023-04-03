#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
int k = 0;
while (*(needle + i) != '\0')
{
j = 0;
while (*(haystack + j) != '\0')
{
if (*(needle + i) == *(haystack + j))
{
k = i;
break;
}
j++;
}
if (k != 0)
{
return (haystack + i);
}
i++;
}
return (0);
}
