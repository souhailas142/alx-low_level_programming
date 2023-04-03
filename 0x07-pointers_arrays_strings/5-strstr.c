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
int i = 0, j = 0;
char *c;
bool found;
while (*(needle + i) != '\0')
{
j = 0;
found = false;
while (*(haystack + j) != '\0')
{
if (*(needle + i) == *(haystack + j))
{
found = true;
break;
}
j++;
}
if (found){
return (haystack + j);
}
i++;
}
return (0);
}
