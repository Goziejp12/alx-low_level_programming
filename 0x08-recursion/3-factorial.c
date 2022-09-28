#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * if the number is lower than 0,
 * the function should return -1 to indicate an error
 * @n: the number
 * Return: -1 or factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
