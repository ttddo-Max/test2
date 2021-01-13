#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("请输入两个值a和b\n");
	scanf_s("%d %d", &a, &b);
	if (a < b)
		printf("b大\n");
	else if (a > b)
		printf("a大\n");
	else
		printf("a等于b\n");
	return 0;
}