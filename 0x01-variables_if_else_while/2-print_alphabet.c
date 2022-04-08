#include <stdio.h>

/**
 * main - alphabbets in lowerrcase
 * prints alphabets in loweercase
 * new line beneath theb alphabets
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
