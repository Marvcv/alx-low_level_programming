#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *b_dog;
	int i, lname, lowner;

	b_dog = malloc(sizeof(*b_dog));
	if (b_dog == NULL || !(name) || !(owner))
	{
		free(b_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	b_dog->name = malloc(lname + 1);
	b_dog->owner = malloc(lowner + 1);

	if (!(b_dog->name) || !(b_dog->owner))
	{
		free(b_dog->owner);
		free(b_dog->name);
		free(b_dog);
		return (NULL);
	}

	for (j = 0; j < lname; j++)
		b_dog->name[j] = name[j];
	b_dog->name[j] = '\0';

	b_dog->age = age;

	for (j = 0; j < lowner; j++)
		b_dog->owner[j] = owner[j];
	b_dog->owner[j] = '\0';

	return (b_dog);
}
