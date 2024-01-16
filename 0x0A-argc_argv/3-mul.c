/**
  *main - multiplies two numbers
 *@argc: argument count
 *@argv: argumement vector
 *Return: 0 on success and 1 on failure
  */
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	(void)argc;
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
