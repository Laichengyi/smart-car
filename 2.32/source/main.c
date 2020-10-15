#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	float a, b, c;
	printf("身高 體重\n");
	scanf_s("%f%f", &a, &b);

	c = b / a / a;

	printf("BMI為:%f\n",c);
		system("pause");

}