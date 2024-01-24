/**
  *int_index - serches for an integer
  *@array: parameter to be passed
  *@size: size of array
  *@cmp: pointer to a function
  *Return: 0
  */

#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
		return (-1);
}
