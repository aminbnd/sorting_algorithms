#include "sort.h"
/**
 * swap - swap two inetegers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int empty;

	empty = *a;
	*a = *b;
	*b = empty;
}

/**
 * hoare - Partition of the array
 * @array:
 * @low: integer
 * @high: integer
 * Return: integer
 */
int hoare(int *array, int low, int high, size_t size)
{
	int pivot = array[low];
	int i = low - 1;
	int j = high + 1;

	while (true)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot);
		if (i >= j)
			return j;
		swap(&array[i], &array[j]);
		print_array(array, size);
	}	
}

/**
 * quicksort - sorting an array of integers
 * @array: array to be sorted
 * @low: lowest number in the array
 * @high: highest number in the array
 * @size: size of the array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p_i;
	
	if (low < high)
	{
		p_i = hoare(array, low, high, size);
		quicksort(array, low, p_i, size);
		quicksort(array, p_i + 1, high, size);
	}
}

/**
 * quick_sort_hoare - Quick sort an array of integers
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, size - 1, size);		
}
