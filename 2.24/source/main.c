#include <stdio.h>

int main() {
	int i;

	printf("enter number:\n");
	scanf_s("%d", &i);

	if (i % 2 == 0)
		printf("%d is even\n", i);

	if (i % 2 != 0)
		printf("%d is odd\n", i);

	return 0;
}