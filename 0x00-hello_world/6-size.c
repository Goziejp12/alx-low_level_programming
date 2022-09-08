#include <stdio.h>

/**
 * main - entry point
 * Description - "prints the size of various types"
 * Return: 0
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int l;
	long long int l2;

	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l2));
	return (0);
}
