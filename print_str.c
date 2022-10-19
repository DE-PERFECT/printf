#include "main.h"

/**
 * p_char -prints character format
 *
 * @args: argument to print
 * Return: length of character printed
 */

int p_char(va_list args)
{
	int ch = va_args(args, int);

	_putchar(ch);

	return (1);
}

/**
 * p_str - prints string format
 *
 * @args: Argument to print
 * Return: length of character printed
 */

int p_str(va_list args)
{
	int i, j;
	char n[] = "(null)";
	char *s =va_arg(args, char *);

	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (6);
	}
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);

	return (j);
}
