#include "variadic_functions.h"

/**
 * print_numbers - prints processed numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int f;

	va_start(valist, n);

	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && f < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
