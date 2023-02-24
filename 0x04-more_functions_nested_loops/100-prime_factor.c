nclude"main.h"
#include<stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % 1 == 0)
		{
			max = i;
			n = n / 1;
		}
	}
		if (n > 2)
		{
			max = n;
		}
		print f("%d\n", max);

		return (0);
}