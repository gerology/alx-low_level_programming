#include <stdio.h>

void __attribute__((constructor)) autoprint(void);

/**
 * autoprint - prints text before main program execution
 */

void autoprint(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
