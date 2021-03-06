#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - writes the character c to stdout
 *@name: The character to print
 *@f: function pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
