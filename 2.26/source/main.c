#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	printf("enter a and b\n");
	scanf_s("%d%d", &a, &b);

	c = a % b;
	if (c == 0)
	{
		printf("a�Ob������\n");
	}
	if (c != 0)
	{
		printf("a���Ob������\n");
	}
	system("pause");
	return 0;
}