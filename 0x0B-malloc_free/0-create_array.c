#include "main.h"

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(c) * size);

	if (array == 0)
	{
		return (NULL);
	}
	else
	{
	for (index = 0; index < size; index++)
	{
		*(array + index) = c;
	}

	return (array);
	}
}
