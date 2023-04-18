#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string @str
 * @str: string
 * Return: SUCCESS
 */
char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	s = (char *)malloc(len * sizeof(*str) + 1);
	if (s == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
/**
 * new_dog - function that creates a new dog.
 * @name: name od new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);
	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
