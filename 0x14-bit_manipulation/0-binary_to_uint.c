#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string containing the binary number.
 *
 * Description:
 * This function takes a string of 0s and 1s and converts it to its equivalent
 * unsigned integer representation. It starts from the least significant bit
 * (rightmost) and calculates the integer value by iteratively doubling it
 * for each '1' encountered.
 *
 * Return: The unsigned integer value of the binary string.
 *         If there are characters other than '0' and '1' in the string,
 *         or if the string is NULL, it returns 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	/* Calculate the length of the input string */
	for (len = 0; b[len] != '\0'; len++)
		;

	/* Convert binary to unsigned integer */
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}

