#include <stdio.h>
void print(void) __attribute__((constructor));
/**
  * print - prints to sentence to the terminal before main
  */
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
