#include <stdio.h>
/**
 * main - print a string of numbers
 *
 * Description: print numbers of base 10
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
