/* 부동 소수점 자료형의 크기 계산 */
#include <stdio.h>

int main ()
{
	float x = 1.234567890123456789;
	double y = 1.234567890123456789;

	printf("float의 크기 = %d\n", sizeof(float));		// float의 크기 출력
	printf("double의 크기 = %d\n", sizeof(double));		// double의 크기 출력

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);
	
	return 0;
}