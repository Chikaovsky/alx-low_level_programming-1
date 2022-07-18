/**
 * _memset - it fills the allocated memory space witha given value
 * @s: the memory space to be filled
 * @b: a value to be filled to the space
 * @n: number of times to be filled
 * Return: returns pointer to the memory location
 */

#include "main.h"


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
