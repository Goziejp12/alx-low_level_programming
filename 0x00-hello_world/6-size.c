#include <stdio.h>

/**
 * main - entry point
 * Description - "prints the size of various types 
 * on the computer it is compiled and run on"
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char c;
	float f;
	long l;
	long long l2;

	printf("Size of an int: %lu byte(s)\n", sizeof(i);
	printf("Size of a char: %lu byte(s)\n", sizeof(c);
	printf("Size of a float: %lu byte(s)\n", sizeof(f);
	printf("Size of a long int: %lu byte(s)\n", sizeof(l);
	printf("Size of a long long: %lu byte(s)\n", sizeof(l2);

	return (0);
}
