#include <stdio.h>
/**
* main -> print lowcase letter in reverse
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)
		putchar(letter);

	putchar(10);
	return (0);
}