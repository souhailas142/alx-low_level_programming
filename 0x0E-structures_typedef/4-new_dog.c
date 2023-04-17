#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: name od new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (0);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
