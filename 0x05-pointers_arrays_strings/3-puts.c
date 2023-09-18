#include "main.h"
/**
 * puts - prints a string, followed by a new line, to stout
 * @str: string to print
 */
void puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('/n');
}
