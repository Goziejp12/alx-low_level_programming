#include <stdio.h>

/**
 * main - entry point
 * Description - "prints the size of various types"
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int l2;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(l));
	printf("Size of a long long int: %i byte(s)\n", sizeof(l2));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
