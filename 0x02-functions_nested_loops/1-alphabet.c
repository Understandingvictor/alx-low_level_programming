/*
*main - prints alphabets in lowercase followed by a new line
*Return: 0 upon success
*/

#include <main.h>

void print_alphabet(void)
{
	char start = 'a'
	char stop = 'z'

while (start < stop)
	{putchar(start);
	start++;
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
