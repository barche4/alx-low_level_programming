#include <stdio.h>
/**
* main -> 16 base numbers in lowercase 
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = '0';
	int b = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}