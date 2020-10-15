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
		printf("a是b的倍數\n");
	}
	if (c != 0)
	{
		printf("a不是b的倍數\n");
	}
	system("pause");
	return 0;
}