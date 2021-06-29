#include <stdio.h>

/**
 * print_array - print array up to  n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[1]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
