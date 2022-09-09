#include <stdio.h>
/**
 * main - prints lower and uppercase alphabet
 * Return: (0)
 */
int main(void)
{
	char ch_1 = 'a';
	char ch_2 = 'A';

	while (ch_1 <= 'z')
	{
		putchar(ch_1);
		ch_1++;
	}
	while (ch_2 <= 'Z')
	{
		putchar(ch_2);
		ch_2++;
	}
	putchar('\n');
	return (0);
}
