#include <stdio.h>
/**
 * main - prints all single digits numbers of base 10 from 0
 * Return: (0)
 */
int main(void)
{
	int b10;

	for (b10 = 0; b10 < 10; b10++)
	{
		putchar(b10);
	}
	putchar('\n');
	return (0);
}
