#include "main.h"
/**
 * print_most_numbers - a function that prints from 0 to 9 followed by newline
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
