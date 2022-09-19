/* 삼각형 넓이 구하는 프로그램 */
#include <stdio.h>

int main ()
{
	float b, h, area;								// 변수 밑변, 높이, 넓이 설정

	printf("삼각형의 밑변을 설정해 주세요.\n");		// scanf 설명
	scanf("%f", &b);								// 변수 밑변 설정

	printf("삼각형의 높이를 설정해 주세요.\n");		// scanf 설명
	scanf("%f", &h);								// 변수 높이 설정

	area = 0.5*h*b;									// area 값 설정

	printf("삼각형의 넓이 : %f\n", area);			// area 값 출력

	return 0;
}