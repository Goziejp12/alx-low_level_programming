#include <stdio.h>
/**
 * main - prints all the numbers of base 16 lowercase
 * Return: (0)
 */
int main(void)
{
	char h, h2;

	for (h = 0; h < 10; h++)
	{
		putchar(h);
	}
	for (h2 = 'a'; h2 < 'g'; h2++)
	{
		putchar(h2);
	}
	putchar('\n');
	return (0);
}
