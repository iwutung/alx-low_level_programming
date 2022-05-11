#include "main.h"

/**
 * print_name - Prints a name.
 * @name: name to be printed.
 * @f: pointer to the function.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
