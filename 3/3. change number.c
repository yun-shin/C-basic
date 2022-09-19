/* int형의 변수 x와 y의 값을 서로 교환하는 프로그램 */
#include <stdio.h>

int main()
{
	int x = 10;							// x를 10으로 초기화
	int y = 20;							// y를 20으로 초기화
	int tmp;							// 변수 tmp

	printf("x = %d, y = %d\n", x, y);		// 출력

	tmp = x;							// tmp에 x값 대입
	x = y;								// x값을 y에 대입
	y = tmp;							// tmp 값을 y에 대입

	printf("x = %d, y = %d\n", x, y);		// 결과값 출력

	return 0;
}