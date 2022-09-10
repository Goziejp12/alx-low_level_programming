#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 * Return: (0)
 */
int main(void)
{
	int b;

	for (b = 48;  b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
