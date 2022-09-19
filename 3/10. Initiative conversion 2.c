/* 10, 8, 16 진수 변수를 10진수로 출력하기 */
#include <stdio.h>

int main ()
{
	int x = 10;				// 10진수 변수
	int y = 010;			// 8진수 변수
	int z = 0x10;			// 16진수 변수

	printf("x = %d\n", x);		// 10진수 변수 10진수로 출력
	printf("y = %d\n", y);		// 8진수 변수 10진수로 출력
	printf("z = %d\n", z);		// 16진수 변수 10진수로 출력

	return 0;
}