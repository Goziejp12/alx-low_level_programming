#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers
 * Return: (0)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n !=57)
		{
		putchar(n);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
