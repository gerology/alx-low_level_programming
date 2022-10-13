#include "function_pointers.h"

/**
 * int_index -searches an integer by returningthe index of the element
 * @array: array to search in
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index if successfull, -1 if failed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, h;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			h = cmp(array[i]);
			if (h)
				break;

		}
		if (size > i)
			return (i);
	}
	return (-1);
}
