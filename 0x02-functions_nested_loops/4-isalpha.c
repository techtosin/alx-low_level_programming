#include "main.h"

/**
 * _isalpha - Function checks if c is a letter, lowercase or
 * checks for an alphabetic character
 * @c: is the int variabe used for argument in the function
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return  (0);
}

