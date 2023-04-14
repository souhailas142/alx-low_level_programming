#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character
 * @c: character
 * Return: @c
 */
void _putchar(char c)
{
        write(1, &c, 1);
}
