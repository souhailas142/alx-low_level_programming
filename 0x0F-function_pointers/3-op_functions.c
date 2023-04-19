#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum two numbers
 * @a: nbr1
 * @b: nbr2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers
 * @a: nbr1
 * @b: nbr2
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two numbers
 * @a: nbr1
 * @b: nbr2
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two numbers
 * @a: nbr1
 * @b: nbr2
 * Return: div or error
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two numbers
 * @a: nbr1
 * @b: nbr2
 * Return: mod or error
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
