/* 부동소수형을 사용한 프로그램 */
#include <stdio.h>

int main ()
{
	double x;

	x = (1.0e20 + 5.0) - 1.0e20;	// 부동 소수점 연산
	printf("%f\n", x);

	return 0;
}