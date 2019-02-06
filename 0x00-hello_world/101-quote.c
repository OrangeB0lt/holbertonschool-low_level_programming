#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints quote using write function
 *
 * Return: 0 to exit program
 **/

int main(void)
{
	int i = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19/n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", i);

	return (0);
}
