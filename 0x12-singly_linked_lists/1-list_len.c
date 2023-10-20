#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to a struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function takes a pointer to a struct dog and initializes
 * its members with the provided values for the name, age, and owner. It ensures
 * that the pointer to the struct is not NULL before performing the initialization.
 *
 * Return: No return value.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

