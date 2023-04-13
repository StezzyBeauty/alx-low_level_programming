#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers using the
 *		binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		print_array(array, low, high);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
