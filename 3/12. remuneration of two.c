/* 2의 보수 프로그램 */
#include <stdio.h>

int main ()
{
	int x = 3;						// 변수설정
	int y = -3;						// 변수설정

	printf("x = %08X\n", x);		// 16진수 8자리로 출력
	printf("y = %08X\n", y);
	printf("x+y = %08X\n", x+y);

	return 0;
}