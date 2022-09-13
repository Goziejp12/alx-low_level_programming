#include "main.h"
/**
 * main - prints alphabet in lowercase
 * Return: (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putcahr(c);
	}
	_putchar('\n');
	return (0);
}
