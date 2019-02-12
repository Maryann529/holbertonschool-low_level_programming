#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, sum;

	for (i = 0; i < 1024; i++)
	{
		j = i / 3;
		k = i / 5;
		if ((i % 3) == 0)
		{
			sum = sum + j;
		} else if ((i % 5) == 0)
		{
			sum = sum + k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
