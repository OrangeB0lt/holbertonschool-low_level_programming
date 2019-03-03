#include <stdio.h>

/**
 * main - prints out its name then adds a new line
 * @argc: argument length
 * @argv: actual string to print
 * Return: returns 0 to end program
 **/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		argv[0] = argv[4];
		printf("%s\n", argv[0]);
	}
	return (0);
}
