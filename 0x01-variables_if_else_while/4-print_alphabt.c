#include <stdio.h>
/**
 * main - prints lowercase alphabet except 'q' and 'e'
 * Return: (0)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z' || ch != 'q' || ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
