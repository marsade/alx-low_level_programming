#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 i fbig endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *bytes;


	bytes = (char *)&value;
	return ((int)bytes[0]);
}
