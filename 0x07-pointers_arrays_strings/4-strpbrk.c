#include "main.h"
/**
 * _strpbrk - Entry points
 * @s: input
 * @accept: input
 * Return: Always zero (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
