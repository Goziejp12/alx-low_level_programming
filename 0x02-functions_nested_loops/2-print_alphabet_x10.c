#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int round = 0;
	char c = 'a';

	while (round < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	_putchar('\n');
	round++;
	}
}
