#include<stdlib.h>
#include"main.h"
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: stored cha
 * Return: pointer to char arrays
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
