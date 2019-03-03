#include <stdio.h>

/**
 * main - prints number of arguments coming into the program
 * @argc: number of arguments
 * @argv: arguments coming in
 * Return: returns 0 to end program
 **/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (--argc));
	return (0);
}
