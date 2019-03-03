#include <stdio.h>

/**
 * main - prints arguments taken in, each on a new line
 * @argc: argument length
 * @argv: string filled with arguments
 * Return: returns 0 to exit program
 **/

int main (int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
