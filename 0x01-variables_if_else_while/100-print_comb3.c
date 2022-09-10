#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: (0)
 */
int main(void)
{
	int d, e;

	for (d = 48; d < 58; d++)
	{
		putchar(d);
	}
	for (e = 58; e >= 48; e--)
	{
		putchar(e);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
