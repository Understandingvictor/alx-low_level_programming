#include<stdio.h>

/**
*main - This program prints the sizes of various types to the console or stdout
*description - uses some set boundaries bby alx to print
*Return: Returns 0 on success
*/

int main(void)
{
	printf("the size of char: %zu byte(s)\n", sizeof(char));
	printf("the size of an int: %zu byte(s)\n", sizeof(int));
	printf("the size of a long: %zu byte(s)\n", sizeof(long));
	printf("the size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("the size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
