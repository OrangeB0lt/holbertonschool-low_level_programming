#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints the name passed in
 * @name: name passed in
 * @f: function on how to print a name
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	void (*PrintName)(char *);

	PrintName = f;
	PrintName(name);
}
