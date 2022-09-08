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

	printf("The size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("The size of a char is: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("The size of a float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	printf("The size of a long is: %lu byte(s).\n", (unsigned long)sizeof(l));
	printf("The size of a long long: %lu byte(s).\n", (unsigned long)sizeof(l2));

	return (0);
}
