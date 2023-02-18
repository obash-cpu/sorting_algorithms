#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - Function that sorts an array of ints
 * using bubble sort algorithm
 * @array: array of ints
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			tmp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = tmp;
			print_array(array, size);
			}
		}
}
