#include <unistd.h>
/**
 * _putchar- writesr the  char c to stdou
 * @c: th char to print
 *
 * Return: on success 1.
 * on error,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
