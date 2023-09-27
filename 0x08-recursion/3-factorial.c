#include "main.h"

/**
 * factorial - gets factorial of m
 * @m: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (m * factorial(m - 1));
}
