#include <stdio.h>

int main()
{
	char str[5] = " ";
	int i;

	printf("enter a word :");
	scanf_s("%s", str, sizeof(str));
	{
		printf("%c", str[3]);
	}
	printf("\n");
}
