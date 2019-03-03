#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds 2 digits from arguments
 * @argc: length of string holding arguments
 * @argv: the string containing the arguments
 * Return: returns 1 if the argments are not digits, else 0
 **/

int main(int argc, char *argv[])
{
	int n, x, i;

	n = 0;
	if (argc < 1)
		printf("%d\n", 0);
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[argc]);
		n += x;
	}
	printf("%d\n", n);
	return (0);
}
