#include <stdio.h>
/**
 * main - prints lower and upper case alphabets
 * Return: (0)
 */
int main(void)
{
	char ch_1 = 'a';
	char ch_2 = 'A';
	
	while (ch_1 <= 'z' && ch_2 <= 'Z')
	{
		putchar(ch_1);
		putchar(ch_2);
	}
	putchar('\n');
	return (0);
}
