#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: strict dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		exit(1);
	(!(d->name)) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	(!(d->age)) ? printf("Age: (nil)\n") : printf("Age: %f\n", d->age);
	(!(d->owner)) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
