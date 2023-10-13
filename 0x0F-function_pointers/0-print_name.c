#include "function_pointers.h"

/**
 * print_name - outputs the name.
 * @inputname: input name.
 * @b: function pointer.
 *
 * Return: no return.
 */
void print_name(char *inputname, void (*b)(char *))
{
	if (inputname && b)
		b(inputname);
}
