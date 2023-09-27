#include "main.h"

/**
 * prime2 - Makes possible to evaluate from 1 to m
 * @c: same number as m
 * @d: number that iterates from 1 to m
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int c, int d)
{
	if (c == d)
		return (1);
	else if (c % d == 0)
		return (0);
	return (prime2(c, d + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @m: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int m)
{
	if (m <= 1)
		return (0);
	return (prime2(m, 2));
}
