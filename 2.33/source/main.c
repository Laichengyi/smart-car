#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, g;
	printf("�`���{:");
	scanf_s("%f", &a);
	printf("�o��:");
	scanf_s("%f", &b);
	printf("���o��:");
	scanf_s("%f", &c);
	printf("�q��O:");
	scanf_s("%f", &d);
	printf("�����O:");
	scanf_s("%f", &e);
	printf("��O:");
	g = a * b*c + d + e;
	printf("%f", g);

	system("pause");
}