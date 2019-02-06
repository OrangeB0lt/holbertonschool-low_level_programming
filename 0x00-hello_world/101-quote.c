#include <string.h>
#include <unistd.h>

/**
 * main - prints quote using write function
 *
 * Return: 1 to exit program
 **/

int main(void)
{
/*
 *int i = strlen("and that piece of art is useful\" - Dora Korpar, 2015-
 */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
