#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("����������ֵa��b\n");
	scanf_s("%d %d", &a, &b);
	if (a < b)
		printf("b��\n");
	else if (a > b)
		printf("a��\n");
	else
		printf("a����b\n");
	return 0;
}