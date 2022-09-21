#include "main.h"
#include <string.h>

/**
 * reverse_array - This function reverses the content of an array
 * @a: Array pointer
 * @n: max array index
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
