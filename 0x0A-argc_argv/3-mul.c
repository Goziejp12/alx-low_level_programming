#include <stdio.h>
#include <stdlib.h>
/**
 * main - Your program should print the result of the multiplication,
 * followed by a new line.
 * You can assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 * @argc: argument count
 * @argv: character variable
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
			mul = x * y;
			printf("%d\n", mul);
			return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
