#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, age, people, ok, xx;
	int zero = 0;

	printf("������ �Ⱓ(��), �������� ����, ������ ���� �Է��Ͻÿ�.: ");
	scanf("%d %d %d", &x, &age, &people);

	ok = x >= 18 && age >= 40 && people >= 3;
	printf("%d\n", (ok > zero) ? ok : zero);


	return 0;
}