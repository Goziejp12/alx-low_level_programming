#include <stdio.h>
#include <stdlib.h>
/**
 * main - Your program should print the result of the multiplication,
 * followed by a new line.
 * You can assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 * @argv: character variable
 * Return: 0
 */
int main(int argc; char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
