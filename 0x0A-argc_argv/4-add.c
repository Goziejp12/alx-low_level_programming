#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that adds positive numbers
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * @argc: argument count
 * @argv: arguments
 * isDigit - checks digit
 * @s: pointer variable
 * Return: 0
 */
int isDigit(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
			i++;
		}
	}
	return (0);
}
int main(int argc, char *argv[])
{
	int i, add;

	if (argc > 1)
	{
		add = 0;
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
			printf("%d\n", add);
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else if (isDigit(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
}
