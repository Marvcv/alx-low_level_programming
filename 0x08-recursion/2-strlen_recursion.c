#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @l: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *l)
{
	if (*l != '\0')
	{
		return (1 + _strlen_recursion(l + 1));
	}
	return (0);
}
