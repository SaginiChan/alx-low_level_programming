#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int isPalindrome(int number)
{
	int reverse = 0;
	int original = number;

	while (number > 0)
	{
		int digit = number % 10;

		reverse = reverse * 10 + digit;
		number /= 10;
	}
	return (original == reverse);
}
int main(void)
{
	int largestPalindrome = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = i; j < 1000; j++)
		{
			int product = i * j;

			if (isPalindrome(product) && product > largestPalindrome)
			{
				largestPalindrome = product;
			}
		}
	}
	FILE *file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", largestPalindrome);
		fclose(file);
	}
	return (0);
}
