/**
*reverse_array -  function that reverses the integers of arrays
*@a: parameter poiiting to array
*@n: parameter which holds nnumber of element of array
*Return: 0 upon completion
*/

#include "main.h"
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
