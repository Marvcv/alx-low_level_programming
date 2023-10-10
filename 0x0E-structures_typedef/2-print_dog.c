#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @g: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *g)
{
	if (g)
	{
		if (!(g->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", g->name);

		printf("Age: %f\n", g->age);

		if (!(g->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", g->owner);
	}
}
