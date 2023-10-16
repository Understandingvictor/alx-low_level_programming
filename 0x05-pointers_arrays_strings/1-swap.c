/**
*swap_int - a function that swaps the values of two integers.
*@a:takes this as parameters
*@b: takes this as parameters
*Return: 0 upon completion
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
