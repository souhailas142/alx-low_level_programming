#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number 
 * of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument values
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[]) {
if (argc == 2)
{
int i = 0, money = atoi(argv[1]), lc = 0;
int c[] = {25, 10, 3, 2, 1};
while (i < 5)
{
if (money >= c[i])
{
lc += money / c[i];
money = money % c[i];
if (money % c[i] == 0)
break;
}
i++;
}
printf("%d\n", lc);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
