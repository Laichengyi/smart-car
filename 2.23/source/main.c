#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("enter three intergers\n");
	scanf_s("%d%d%d", &a, &b, &c);

	if ((a > b) && (a > c))
		
	{
		printf("largest:%d\n", a);
		if (b > c)
			printf("smallest:%d\n", c);
		if (c > b)
			printf("smallest:%d\n", b);
	}
	if ((b > a) && (b > c))
		
	{
		printf("largest:%d\n", b);
		if (a > c)
			printf("smallest:%d\n", c);
		if (c > a)
			printf("smallest:%d\n", a);
	}
	if ((c > b) && (c > a))
		
	{
		printf("largest::%d\n", c);
		if (b > a)
			printf("smallest:%d\n", a);
		if (a > b)
			printf("smallest:%d\n", b);
	}
	system("pause");
	return 0;
}