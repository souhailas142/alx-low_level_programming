#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0 (SUCCESS)
 */i
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
int k = 0;
while (*(haystack + i) != '\0')
{
j = 0;
while (*(needle + j) != '\0' && ( *(haystack + i) == needle[0]))
{
if (*(needle + j) != *(haystack + (i +  j)))
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
