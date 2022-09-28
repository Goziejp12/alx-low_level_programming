#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: a pointer variable to the string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s && *s != ' ')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}