#include "main.h"

/**
 * get_size - Calculates which SIZE
 * @format: Formatted string
 * @i: List of arguments.
 *
 * Return: size.
 */
int get_size(const char *format, int *i)
{
	int a = *i + 1;
	int size = 0;

	if (format[a] == 'l')
		size = S_LONG;
	else if (format[a] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = a - 1;
	else
		*i = a;

	return (size);
}
