/**
*reverse_array -  function that reverses the integers of arrays
*@a: parameter poiiting to array
*@n: parameter which holds nnumber of element of array
*Return: 0 upon completion
*/

#include "main.h"
void reverse_array(int *a, int n)
{
	int nMinus = n - 1;
	int i;

	for (i = nMinus; i >= 0; i--)
	{
		_putchar(a[i] + '0');
		if (i > 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
