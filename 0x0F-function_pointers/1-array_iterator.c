#include "function_pointers.h"

/**
 * array_iterator - executes function as a given parameter
 *
 * @array: array to execute function on
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t g;

	if (array && action)
	{
		for (g = 0; g < size; g++)
		{
			action(array[g]);
		}
	}
}

