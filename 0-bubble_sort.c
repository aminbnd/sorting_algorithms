#include "sort.h"
/**
 * bubble_sort - Sorts an array of integer in an ascending order
 * @array: array of integers
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	/*size_t iter;*/
	int empt;
	unsigned int i, iter;

	if (!array || size < 2)
		return;
	for(i = 0; size -1; i++)
	{
		for(iter = 0; iter < size -1; iter++)
		{
			if (array[iter + 1] < array[iter])
			{
				empt = array[iter];
				array[iter] = array[iter + 1];
				array[iter + 1] = empt;
				print_array(array, size);
			}
		}
	}
}
