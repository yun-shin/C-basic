// ���� �ڸ��� ���� �ڸ� ���� ���� ��Ÿ���� ���α׷�
#include <stdio.h>

int main ()
{
	int input;
	int ten;
	int one;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input);

	ten = input % 10;
	one = input / 10;
	printf("���� �ڸ� : %d\n���� �ڸ� : %d\n", one, ten);

	return 0;
}