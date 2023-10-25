#include "main.h"
/**
 * _puts_recursion - functions likes puts();
 * @s: input
 * Return: Always zero (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
