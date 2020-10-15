#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, g;
	printf("總里程:");
	scanf_s("%f", &a);
	printf("油價:");
	scanf_s("%f", &b);
	printf("均油耗:");
	scanf_s("%f", &c);
	printf("通行費:");
	scanf_s("%f", &d);
	printf("停車費:");
	scanf_s("%f", &e);
	printf("花費:");
	g = a * b*c + d + e;
	printf("%f", g);

	system("pause");
}