#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: an ASCII character
 * Return: (0)
 */
int _isalpha(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
