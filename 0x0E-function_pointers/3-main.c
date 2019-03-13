#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 **/

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	f = get_op_func(argv[2]);
	b = atoi(argv[3]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = f(a, b);
	printf("%d\n", answer);
	return (0);
}
