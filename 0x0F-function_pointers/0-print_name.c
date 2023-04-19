#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to be printed
* @f: function pointer or callback function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
