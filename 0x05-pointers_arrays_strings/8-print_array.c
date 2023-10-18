/**
*print_array - prints n elements of an array of integ., followed by a new line.
*@a: parameter to be taken
*@n: Parameter to be taken
*Return: 0 upoon completion
*/

#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}

	printf("\n");
}
