#include <stdio.h>
/**
 * main - A program that print the size of various computer types
 * Return 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %iu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %iu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %iu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %iu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %iu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
