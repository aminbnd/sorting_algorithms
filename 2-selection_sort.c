#include "sort.h"
/**
 * swap_elem - Swap integers
 * @a: first element
 * @b: second element
 * Return: void
 */
void swap_elem(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/**
 * selection_sort - Sorts integers in an array
 * @array: The array containing integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (!array || size < 2)
		return;
	i = 0;
	while (i < size - 1)
	{
		min = 1;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		swap_elem(&array[min], &array[i]);
		print_array(array, size);
		i++;
	}
}
