#include <stdio.h>
/**
 * main - prints lowercase alphabet except 'q' and 'e'
 * Return: (0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	else
	{
	}
	}
	putchar('\n');
	return (0);
}
