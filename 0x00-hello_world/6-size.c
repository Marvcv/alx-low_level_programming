#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the entry point of the program.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", sizeofa(a));
	printf("size of a int: %lu byte(s)\n", sizeofa(b));
	printf("size of a long int: %lu byte(s)\n", sizeofa(c));
	printf("size of a long long int: %lu byte(s)\n", sizeofa(d));
	printf("size of a float: %lu byte(s)\n", sizeofa(e));
}
