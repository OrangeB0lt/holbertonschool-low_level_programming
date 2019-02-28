#include "holberton.h"

/**
 * is_prime_number - checks if value is prime
 * @n: input value
 * Return: returns booleen value
 **/
int prime_check(int i, int n);

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - checks if value is prime
 * @i: input value
 * @n: divisor
 * Return: returns a boolean statement
 **/

int prime_check(int i, int n)
{
	if (i < 2)
	{
		return (0);
	}
	else if (n * n > i)
	{
		return (1);
	}
	return (i % n == 0 ? 0 : (prime_check(i, n + 1)));
}
