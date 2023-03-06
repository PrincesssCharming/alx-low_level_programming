#include"main.h"
#include<stdlib.h>
/**
 * print_diagsums - prints sum of square matrix int
 * @a: pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i - 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i);
				sum2 += *(a + (size * i + size - 1 - i));
				}
				printf("%d, ", sum1);
				Printf("%d\n", sum2);
				}
