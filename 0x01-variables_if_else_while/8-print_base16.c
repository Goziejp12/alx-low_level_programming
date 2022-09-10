#include <stdio.h>
/**
 * main - prints all the numbers of base 16 lowercase
 * Return: (0)
 */
int main(void)
{
	char h;

	for (h = 0; h < 10; h++)
	{
		putchar(h);
	}
	for (h = 'a'; h < 'g'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
