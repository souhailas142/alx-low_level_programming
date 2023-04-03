#include "main.h"
#include <stdbool.h>
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
bool found;
while (*(needle + i) != '\0')
{
j = 0;
while (*(haystack + j) != '\0')
{
if (*(needle + i) == *(haystack + j))
{
found = true;
break;
}
j++;
}
i++;
}
return (NULL);
}
