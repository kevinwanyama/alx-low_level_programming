#include <unistd.h>
/**
 * _putchar - write the character c to  stdout
 * @c: the character to print
 * Return: on success 1
 * on error, -1 is returned to errno is set appropriately
 */
int _putchar(char)
{
	return(write(1, &c, 1));
}
