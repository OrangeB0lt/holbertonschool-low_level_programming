#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments brought in
 * @n: number of args
 *
 * Return: 0 is n or returns sum
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, unsigned int);
	}
	va_end(nums);
	return (sum);
}
