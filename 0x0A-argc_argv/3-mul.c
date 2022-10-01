#include <stdio.h>
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
	int i, mul = 0;

	for (i = 0; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
			if (argc != 3)
			{
				printf("Error\n");
			}
	}
	return (1);
}
