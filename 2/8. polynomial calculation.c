/* 다항식을 계산하는 프로그램 */
#include <stdio.h>

int main ()
{
	int x, y;											// 두개의 정수를 저장할 변수

	printf("다항식 3x^2+7x+11를 계산합니다.\n");		// 계산할 다항식에 대한 설명
	printf("변수 x 값을 설정해주세요.\n");				// scanf에 대한 설명
	scanf("%d", &x);									// 변수 x를 입력

	y= (3*x*x)+(7*x)+11;								// 다항식의 값 y값 계산

	printf("다항식의 값은 %d", y);						// 다항식의 값 y 출력
	return 0;
}