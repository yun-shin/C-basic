/* ����ڷκ��� ������ 16������ �Է¹޾Ƽ� 8����, 16���� ���·� ����ϴ� ���α׷� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int e;
	int t;

	printf("16���� ������ �Է��Ͻÿ�: ");
	scanf("%x", &i);

	e = i;
	t = i;

	printf("8�����δ� %o�Դϴ�.\n", e);
	printf("10�����δ� %d�Դϴ�.\n", t);
	printf("16�����δ� %#x�Դϴ�.\n", i);
	return 0;
}
