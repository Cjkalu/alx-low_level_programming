#include <stdio.h>

/* 6-size.c: prints the size of various types on the computer */
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	printf("size of char: %zu bytes\n", sizeof(char));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of double: %zu bytes\n", sizeof(double));
	printf("size of long: %zu bytes\n", sizeof(long));
	printf("size of long long: %zu bytes\n", sizeof(long long));
	return (0);
}
