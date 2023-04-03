#include "main.h"
#include <stdbool.h>
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: 0 (SUCCESS)
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j, k = 0;
char *c;
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
return (haystack + j);
}
i++;
}
return (0);
}
