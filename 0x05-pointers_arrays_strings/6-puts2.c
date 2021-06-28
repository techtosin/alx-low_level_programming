#include "holbert.h"

/**
 * puts2 - prints alternate characters
 *
 * @str: string to alternate print
 *
 * Return: awlays void
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
		i++;

	}
	_putchar('\n')
}
