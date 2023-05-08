#include "main.h"

/**
 * get_endianness - checks if architecture is little endian
 *                  or big endian
 *
 * Return: 0 if big endian. 1 if little endian.
*/

int get_endianness(void)
{
	unsigned int end_num = 1;
	char *c = (char *) &end_num;

	return (c[0]);
}

