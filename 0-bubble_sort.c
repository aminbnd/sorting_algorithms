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

	unsigned int iter;
	bool swap = false;

	if (!array || size < 2)
		return;
	while (!swap)
	{
		swap = true;
		for (iter = 0; iter < size - 1; iter++)
		{
			if (array[iter + 1] < array[iter])
			{
				swap_items(&array[iter], &array[iter + 1]);
				swap = false;
				print_array(array, size);
			}
		}
		/*if (swap == false)
			break;*/
	}
}
