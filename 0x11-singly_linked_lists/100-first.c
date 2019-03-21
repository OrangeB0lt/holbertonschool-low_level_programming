#include "lists.h"

/**
 * msgbefore - prints a message before main runs
 **/

void __attribute__((constructor)) msgbefore()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
