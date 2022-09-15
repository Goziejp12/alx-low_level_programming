#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: c holds the characters
 * Return: 0
 */
int _isupper(int c)
{

	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
