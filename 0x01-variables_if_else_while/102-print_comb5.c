#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all  combinations of two-digit numbers,
 * ranging from 0-99, separated by a comma followed by space
 * prints possible different combinatyions
 * Return: Always 0.
 */
int main(void)
{
	int c = 0;
	int fd;
	int ld;
	int c2;
	int fd2;
	int ld2;
	
	while (c <= 98)
	{
		fd = (c / 10 + '0');
		ld = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			fd2 = (c2 / 10 + '0');
			ld2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(fd);
				putchar(ld);
				putchar(' ');
				putchar(fd2);
				putchar(ld2);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
