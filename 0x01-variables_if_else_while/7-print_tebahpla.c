#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 * Return: (0)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch > 'a', ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
