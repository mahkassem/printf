#include "main.h"

/**
 * is_printable - Evaluates if a char is printable
 *
 * @c: char
 *
 * Return: boolean
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends a hexa code to a buffer
 *
 * @ascii_code: char.
 * @buffer: char buffer[]
 * @i: int.
 *
 * Return: int
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - is digit
 *
 * @c: char
 *
 * Return: int
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - converts a number to the specified size
 *
 * @num: long int
 * @size: int
 *
 * Return: long int
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - converts an unsigned number
 * to the specified size
 *
 * @num: unsigned long int
 * @size: int
 *
 * Return: long int
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
