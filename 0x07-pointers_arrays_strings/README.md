My project of 0x07-pointers_arrays_strings

#C - Even more pointers, arrays and strings This direcory contains some certain files on C programming language, that will be compiled on Ubuntu 20.04 LTS using gcc using the options -Wall - Werror -Wextra -pedantic -std=gnu89

#TASKS.

memset
• Write a function that fills memory with a constant byte.

memcpy • Write a function that locates a character in a string

strchr

Write a function that locates a character in a string.

strspn
Write a function that gets the length of a prefix substring.

strpbrk
Write a function that searches a string for any of a set of bytes.

strstr
Write a function that locates a substring.

Chess is mental torture
Write a function that prints the chessboard.

The line of life is a ragged diagonal between duty and desire
Write a function that prints the sum of the two diagonals of a square matrix of integers.

Double pointer, double fun
Write a function that sets the value of a pointer to a char.

My primary goal of hacking was the intellectual curiosity, the seduction of adventure
Create a file that contains the password for the crackme2 executable.

0memset.c

#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

