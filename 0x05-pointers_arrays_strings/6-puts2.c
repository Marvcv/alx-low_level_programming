#include "main.h"
/**
 * puts2 - -print one character out of 2
 * starting with the first one
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int long = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n';)
}
