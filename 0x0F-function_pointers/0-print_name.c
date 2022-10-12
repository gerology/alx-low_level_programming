#include "function_pointers.h"

/**
 * print_name - funtion that prints name
 * @name: name to be printed
 * @f: pointer to character
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
