#include "main.h"
/**
 * get_endianness - function that checks the endianness.
 * @void: void
 * Return: SUCCESS
 */
int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}
