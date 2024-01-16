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
	int i;
	int j;
	int k;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	(void)argc;
	j = atoi(argv[1]);
	i = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
		return (0);
}
