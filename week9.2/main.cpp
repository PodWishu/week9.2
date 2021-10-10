#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void hourglass(int x)
{
	char c[] = "*";

	for (int i = 0; i < x - 1; i++)
	{
		printf("%*s", i + 1, c);
		for (int j = 2 * (x - i - 1); j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("%*s\n", x, c);
	for (int i = 0; i < x - 1; i++)
	{
		printf("%*s", x - 1 - i, c);
		for (int j = 0; j < 2 * (i + 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int height;
	printf("half of height of hourglass = ");
	scanf("%d", &height);
	hourglass(height);

	return 0;
}