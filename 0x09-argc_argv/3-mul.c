#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiplies arguments put in
 * @argc: number of arguments
 * @argv: arguments to multiply
 * Return: returns 1 if an error occures, 0 if the number can be multiplied
 **/

int main(int argc, char *argv[])
{
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
}
