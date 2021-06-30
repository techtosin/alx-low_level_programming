#include "holberton.h"

/**
 * rot 13 -function that  encodes a string using rot13.
 * @s: pointer to char
 * Return: char
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*s(s + i) == *(l + j))
			{
				*(s + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
