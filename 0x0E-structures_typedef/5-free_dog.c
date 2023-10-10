#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - sets the dogs frees
 * @f: struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *f)
{
	if (f)
	{
		free(f->name);
		free(f->owner);
		free(f);
	}
}
