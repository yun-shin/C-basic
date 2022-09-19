/* 사용자로부터 정수를 16진수로 입력받아서 8진수, 16진수 형태로 출력하는 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int e;
	int t;

	printf("16진수 정수를 입력하시오: ");
	scanf("%x", &i);

	e = i;
	t = i;

	printf("8진수로는 %o입니다.\n", e);
	printf("10진수로는 %d입니다.\n", t);
	printf("16진수로는 %#x입니다.\n", i);
	return 0;
}
