#include "main.h"

/**
  * print_alphabet_x10 -A function that prints the alphabet x10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}

		_putchar('\n');

	}
}
