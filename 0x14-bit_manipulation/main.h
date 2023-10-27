#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The unsigned integer value of the binary string.
 *         If there are characters other than '0' and '1' in the string,
 *         or if the string is NULL, it returns 0.
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to print in binary.
 */
void print_binary(unsigned long int n);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-indexed).
 *
 * Return: The value of the bit at the specified index.
 *         If the index is out of range, it returns -1.
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to set (0-indexed).
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to clear (0-indexed).
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);

#endif

