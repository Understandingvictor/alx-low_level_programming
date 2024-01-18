/**
  *array_range -creates an array
  *@min: minimum value in array
  *@max: maximum value in array
  *Return: a pointer to array in memory
  */

#include <stdlib.h>
#include "main.h"
int *array_range(int min, int max)
{
	int i;
	int *array;
	int totalElement;

	if (min > max)
		return (NULL);

	totalElement = max - min + 1;

	array = malloc(sizeof(int) * totalElement);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < totalElement; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
