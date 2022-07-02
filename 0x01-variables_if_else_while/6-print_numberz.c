#include <stdio.h>
/**
* main -> return base 10 start from 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

for (n = '0'; n <= '9'; ++n)
		putchar(n);

	putchar(10);

	return (0);
}