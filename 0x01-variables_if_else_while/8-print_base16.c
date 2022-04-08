#include <stdio.h>
/**
 * main- main function tha prints the sisten numbers
 * print base 16 numbers in lowercase'
 * new line below
 * success returns zero
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
