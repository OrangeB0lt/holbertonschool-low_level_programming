#include <stdio.h>

/**
 * main - funtion prints out byte sizes of different variable types
 *
 * Description: prints the size of char, int, lont int,
 * long long int, and float
 * Return: 0 to exit program
 */

int main(void)
{
	printf("Size of a char; %zd byte(s)\n", sizeof(char));
	printf("Size of an int: %zd byte(s)\n", sizeof(int));
	printf("Size of a long int: %zd byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zd byte(s)\n", sizeof(long long));
	printf("Size of a float: %zd byte(s)\n", sizeof(float));
	return (0);
}
