/**
 * main - return the values of sizeof
 * Return: 0 if successful,otherwie 1
 */
#include <stdio.h>
int main(void)
{
	char su;
	int x;
	long int y;
	long long int v;
	float s;

	printf("size of a char: %d bite(s)\n", sizeof(su));
	printf("size of an int: %d bites(s)\n", sizeof(x));
	printf("size of a long int: %d bite(s)\n", sizeof(y));
	printf("size of a long long int: %d bite(s)\n", sizeof(v));
	printf("size of a float: %d bite(s)\n", sizeof(s));

	return (0);
}
