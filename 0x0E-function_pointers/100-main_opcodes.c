#include <stdlib.h>
#include <stdio.h>

/**
 * opcodes - print the opcodes
 * @address: address of the main function
 * @num: number of bytes to print
 * Return: void
 */
void opcodes(char *address, int num)
{
	int i;

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", address[i]);
		if (i < num - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints opcodes of main function
 * @argc: number of args passed in
 * @argv: array of pointers to arguments
 * Return: returns O
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes((char *)&main, n);
	return (0);
}
