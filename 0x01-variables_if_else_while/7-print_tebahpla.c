#include <stdio.h>
/**
 * main - that prints alphabets backwards.
 *
 * Return: ALways 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
