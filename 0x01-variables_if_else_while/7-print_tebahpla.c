/**
*main - prints lower case alphabet in reverse order
*Return: returns 0 upon success
*/

#include <stdio.h>

int main(void)
{

	char alphabet = 'z';
	char firstAlphabet = 'a';

	while (alphabet >= firstAlphabet)
	{

	putchar(alphabet);

	alphabet--;

	}
	putchar('\n');
	return (0);
}
