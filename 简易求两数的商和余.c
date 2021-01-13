#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("请输入a和b的值\n");
	scanf_s("%d %d", &a, &b);
	printf("商为:%d,余数为：%d", (a / b), (a % b));
	return 0;
}