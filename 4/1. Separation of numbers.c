// 십의 자리와 일의 자리 숫자 따로 나타내는 프로그램
#include <stdio.h>

int main ()
{
	int input;
	int ten;
	int one;

	printf("정수를 입력하시오: ");
	scanf("%d", &input);

	ten = input % 10;
	one = input / 10;
	printf("십의 자리 : %d\n일의 자리 : %d\n", one, ten);

	return 0;
}