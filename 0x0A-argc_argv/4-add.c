#include <stdio.h>
#include <stdlib.h>
/**
 * main -  a program that adds positive numbers
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
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
	else if (argc < 0)
	{
		printf("Error\n");
		return (1);
	}
}
