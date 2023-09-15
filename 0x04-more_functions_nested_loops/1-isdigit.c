# include "main.h"
/*
 * _isdigit - check if parameter is a digit or a character
 *
 * @c: parameter
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if(c <= 48 && c>= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
