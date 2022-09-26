#include "main.h"
/**
 * set_string - a function that sets the vaue of a pointer to a char
 * @s: pointer to another pointer
 * @to: char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
