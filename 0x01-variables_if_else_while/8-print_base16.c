#include <stdio.h>
/**
 * main - prints all the numbers of base 16 lowercase
 * Return: (0)
 */
int main(void)
{
	int h;
	char h2;

	for (h = 48; h < 58; h++)
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
