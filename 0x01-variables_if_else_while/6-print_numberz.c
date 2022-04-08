#include <stdio.h>
/**
 * main - print digits to base 10
 * print single digits to base 10 starting from 0,
 * folowed with new line
 * return 0 success
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
