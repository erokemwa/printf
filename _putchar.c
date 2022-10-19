#include <unistd.h>

/**
 * _putchar - Writes the character
 * Desc: _putchar function
 * @a: The character to print
 * Return: On success 1.
 * On error, return 0
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
