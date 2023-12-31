#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @m: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _print_rev_recursion(char *m)
{
	if (*m != '\0')
	{
		_print_rev_recursion(m + 1);
		_putchar(*m);
	}
}
