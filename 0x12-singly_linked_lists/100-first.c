#include <stdio.h>
void first(void)__attribute__((constructor));
/**
 * one - prints sentence before main
 * function is executed
 */
void one(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
