#include "main.h"

/**
  * _isalpha - A function that checks for alphabetic character
  *
  * @c: The parameter to be checked
  *
  * Return: 1 if it is in alphabetic character or 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
