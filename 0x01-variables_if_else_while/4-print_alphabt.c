#include <stdio.h>
/**
 * main - prints lowercase alphabet except 'q' and 'e'
 * Return: (0)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	else
	{
	}
	}
	putchar('\n');
	return (0);
}
