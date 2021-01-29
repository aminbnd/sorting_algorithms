#include "sort.h"

/**
 * swap_items - Swap two items in an unsorted array
 * @a: integer, first item
 * @b: inetegr, secon item
 * Return: void
 */
void swap_items(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/**
 * bubble_sort - Sorts an array of integer in an ascending order
 * @array: array of integers
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{

	unsigned int i, iter;
	bool swap;

	if (!array || size < 2)
		return;
	for (i = 0; size - 1; i++)
	{
		swap = false;
		for (iter = 0; iter < size - 1; iter++)
		{
			if (array[iter + 1] < array[iter])
			{
				swap_items(&array[iter], &array[iter + 1]);
				swap = true;
				print_array(array, size);
			}
		}
		if (swap == false)
			break;
	}
}
