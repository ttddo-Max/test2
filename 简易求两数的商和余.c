#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	printf("������a��b��ֵ\n");
	scanf_s("%d %d", &a, &b);
	printf("��Ϊ:%d,����Ϊ��%d", (a / b), (a % b));
	return 0;
}