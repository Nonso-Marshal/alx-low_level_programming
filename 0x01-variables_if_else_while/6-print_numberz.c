#include <stdio.h>
/**
 * main - Print all single digit of base 10 starting from 0
 * only using putchar and without char variables
 * Return: 0 Always
 */

int main()
{
	int x;
	int k;
	int y;
	char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char A[k];
	while (x != 0)
	{
		y = x % 10;
	
		A[k++] = digits[y];

		putchar(digits[y]);
	
	x = x / 10;
	}
	printf("%i\n", y);
	for (; k >= 0; --k)
	{
		putchar(A[k]);
	}
	return 0;
}
