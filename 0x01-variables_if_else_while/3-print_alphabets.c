#include <stdio.h>

/**
 * main - prints alpha in both upper and lowercase
 *Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
