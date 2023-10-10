#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @v: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *v, char *name, float age, char *owner)
{
	if (v)
	{
		v->name = name;
		v->age = age;
		v->owner = owner;
	}
}
