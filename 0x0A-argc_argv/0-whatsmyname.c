#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: counts the arguments number
 * @argv: character variable to the arguments
 * Return: 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
